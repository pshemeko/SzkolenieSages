#include <iostream>
#include <type_traits>

/*
template<typename T>
T foo(T v) {
    std::cout << "Generic function..\n";
    return v;
}
*/

template<typename T>
typename std::enable_if<std::is_same<T, int>::value, double>::type foo(T v) {
    std::cout << "enable_if int function\n";
    return v;
}

template<typename T>
typename std::enable_if<std::is_same<T, double>::value, double>::type foo(T v) {
    std::cout << "enable_if double function\n";
    return v;
}

int main() {
    foo(23.0);

}
