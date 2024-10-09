#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(10);
    v[10] = 1; // UB

    int x;
    std::cout << x; // UB    
}