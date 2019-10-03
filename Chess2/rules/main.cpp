#include <iostream>
#include <string>

struct X {
    explicit X(const std::string& name_)
      : name{new std::string(name_)} {
          std::cout << "Construct X name = " << *name << '\n';
    }
    X(const X& src) {
        std::cout << "Copy constructor X, src.name = " << *(src.name) << '\n';
        name = new std::string(*src.name);
    }
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
    X x1{"first"};
    X x2{"second"};
    x1 = x2;
    X x3 = X("thred"); // Copy delusion od C++14 obowiązkowe...
    X x4(X("four"));
    X x5 = std::move(x1); // Copy delusion.
    x2 = std::move(x5);
}
