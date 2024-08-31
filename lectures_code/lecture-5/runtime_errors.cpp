#include <iostream>
#include <vector>

int main() {
    #if 0
    std::vector<int> v(10);
    v[50'000] = 1;
    #endif

    int y;
    std::cin >> y;
    std::cout << 5 / y;
}