#include <iostream>

bool cmp(int x, int y) {
    return x > y;
}

int main() {

    bool (*p)(int, int) = &cmp;

    std::cout << p << std::endl;;
    std::cout << (void*)p << std::endl;

    return 0;
}