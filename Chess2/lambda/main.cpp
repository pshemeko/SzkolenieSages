#include <iostream>
#include <vector>
#include <functional>

struct X {
    X(int val)
      : val{val} {}

    int operator()(int z) const {
        return val + z;
    }
private:
    int val;
};

int foo(int val) {
    return val * 2;
}

int main() {
    X x{12};
    std::cout << x(123) << '\n';

    int val = 12;

    std::function<int(int)> myLambda = [q = val](int v) mutable -> int { return ++q + v * 2; };
    ++val;
    std::cout << myLambda(123) << '\n';
    myLambda = foo;
    myLambda = x;
    std::vector<std::function<int(int)>> vec;
    vec.emplace_back(x);
    vec.emplace_back([](int v) { return v; });
    vec.emplace_back(foo);
    //using func_type = int (*)(int);
    std::vector<int (*)(int)> vec2;

}


