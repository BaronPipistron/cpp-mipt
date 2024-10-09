#include <iostream>

int f() {
    std::cout << 1;
    return 1;
}

int g() {
    std::cout << 2;
    return 2;
}

int h() {
    std::cout << 3;
    return 3;
}

int main() {
    #if 0
    std::cout << (h() + f() * g()) << std::endl;
    #endif

    int x = 0;
    ++x = x++;

    std::cout << x << std::endl;

    return 0;
}