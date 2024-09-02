#include <iostream>
#include <vector>

int main() {
    int x = 0, y = 1;
    std::cout << &x << ' ' << &y << std::endl;

    int* p = &x;
    std::cout << *p << std::endl;

    std::cout << p + 1 << std::endl;

    std::vector<int> v = {1, 2, 3, 4, 5};
    int* pp = &v[0];
    std::cout << *(++pp) << std::endl;

    std::cout << *&p << ' ' << &*p << std::endl;
}