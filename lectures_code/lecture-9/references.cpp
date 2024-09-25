#include <iostream>

void f(int& y) {
    ++y;
}

void f(int x) {
    ++x;
}

int main() {
    int x = 5;
    int& y = x;

    f(x);
    f(y);

    std::cout << x << ' ' << y << std::endl;

    return 0;
}