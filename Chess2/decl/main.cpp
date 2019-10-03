#include <iostream>

template<typename T1, typename T2>
auto max(T1 a, T2 b) -> decltype(a + b) {
    return a < b ? b: a;
}

int main() {
    auto z = 12;
    decltype(z) a;
    std::cout << max(11.3, 12UL) << '\n';
}
