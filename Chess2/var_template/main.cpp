#include <iostream>

int foo(int a) {
    return a;
}

void bar(int a) {
    (void) a;
}

void baz(int a, int b, int&& c) {
    (void) a;
    (void) b;
    (void) c;
}

template<typename Function, typename... Args>
auto apply(Function fun, Args&&... args) -> std::result_of_t<Function(Args...)> {

    fun(std::forward<Args>(args)...);
}

int main() {
    /*
    int a = 123;
    apply(foo, a);
    apply(bar, 42);
    */
    apply(baz, 1, 2, int(12));
}
