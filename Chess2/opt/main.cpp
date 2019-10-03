#include <iostream>
#include <optional>


std::optional<int> foo(int val) {
    if(val % 2) {
        return std::make_optional<int>(42);
        //return { 42 };
    }
    return {};
}

int main() {
    auto value = foo(13);
    if(value) {
        std::cout << "Jest: " << value.value() << '\n';
    } else {
        std::cout << "Nie ma!\n";
    }
}
