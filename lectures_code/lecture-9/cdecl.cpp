#include <iostream>

int main() {
    int* a[10];
    int (*b)[10];

    void (*pf)(int); // pointer to function which takes int, return void

    void (*pfa[10])(int);

    void (*(*pff[10])(int))(int);

    char * (*(**foo[5][8])())[];
}