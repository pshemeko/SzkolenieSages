#include <vector>
#include <iostream>

struct X {
    explicit X(const std::string& name_)
      : name{new std::string(name_)} {
          std::cout << "Construct X name = " << *name << '\n';
    }
    /*
    X(const X& src) {
        std::cout << "Copy constructor X, src.name = " << *(src.name) << '\n';
        name = new std::string(*src.name);
    }
    */
    X(X&& src) {
        if(src.name != nullptr) {
            std::cout << "Move constructor from src.name " << *(src.name) << '\n';
        } else {
            std::cout << "Move constructor from src.name = nullptr\n";
        }
        name = src.name;
        src.name = nullptr;
    }
    X& operator=(X&& src) {
        std::cout << "operator=(&&) from name = " << (name == nullptr ? "nullptr": *name)
          << ", src.name = " << (src.name == nullptr? "nullpt": *src.name) << '\n';
        if(this != &src) {
            delete name;
            name = src.name;
            src.name = nullptr;
        }
        return *this;
    }
    X& operator=(const X& src) {
        std::cout << "operator=(), old name = " << (name == nullptr? "nullptr": *name)
          << ", src.name = " << (src.name == nullptr ? "nullptr": *src.name) << '\n';
        if(this != &src) {
            delete name;
            name = new std::string(*src.name);
        }
        return *this;
    }
    ~X() {
        std::cout << "Destruct X name = " << (name == nullptr? "nullptr": *name) << '\n';
        delete name;
    }
private:
    std::string * name;
};

int main() {
    std::vector<X> vec;
    vec.reserve(20);
    //X x("o2");
    //vec.emplace_back(std::move(x));
    for(auto i = 0U; i < 20; ++i) {
        vec.emplace_back("obj");
    }
    //vec.emplace_back("obj");
}
