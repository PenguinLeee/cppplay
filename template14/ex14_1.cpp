#include <iostream>

template <typename T> void swap(T&, T&);

int main() {
    std::string a = std::string("123");
    std::string b = std::string("456");
    std::cout << a << b << std::endl;
    swap(a, b);
    std::cout << a << b << std::endl;

    const char* c = "123";
    a = "456";

    std::string &e = a;
    e = b;

    char* const d = "123";
    d = "456";
}

template <typename T> void swap(T &x, T &y) {
    T &t = x;
    t = y;
    const T* s = x;
    s = y;
    T* const u = x;
    u = y;
    x = y;
    y = t;
}
