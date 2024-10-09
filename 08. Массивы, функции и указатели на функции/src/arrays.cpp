#include <iostream>

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    std::cout << *(a + 2) << std::endl;

    int* p = a + 3;

    std::cout << p[-3] << std::endl;

    int (*c)[5];

    return 0;
}