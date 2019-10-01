#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

template<typename T>
class Instances {
public:
    Instances() {
        Instances<T>::instances.push_back(static_cast<T*>(this));
    }
    static std::vector<T*>& getInstances() {
        return instances;
    }
    ~Instances() {
        // Tu derejestracja
        auto& inst = Instances<T>::instances;
        inst.erase(std::remove(inst.begin(), inst.end(), static_cast<T*>(this)), inst.end());
    }
private:
    static std::vector<T*> instances;
};

template<typename T>
std::vector<T*> Instances<T>::instances;

class Airplane: public Instances<Airplane> {
public:
    Airplane(const std::string& name_)
      : name{name_} {}
    const std::string& getName() const {
        return name;
    }
private:
    const std::string name;
};

int main() {
    Airplane a1{"F35"};
    Airplane a2{"F16"};
    Airplane a3{"Mig29"};
    {
        Airplane a4{"DC8"};
        for(auto& a: Instances<Airplane>::getInstances()) {
            std::cout << a->getName() << '\n';
        }
    }
    std::cout << std::string(10, '-') << '\n';
    for(auto& a: Instances<Airplane>::getInstances()) {
        std::cout << a->getName() << '\n';
    }
}
