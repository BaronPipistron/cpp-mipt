#include <iostream>

int x = 0;

void f() {
    ++x;
    std::cout << x << std::endl;
    
    f();
}

int main() {
    f();

    int* p_int = new int;
    *p_int = 10;

    int* p_arr = new int[10000];

    return 0;
}