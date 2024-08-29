#include <iostream>

int main() {
    if (/* bool-expression */) {
        // statement
    } else if (...) {

    } else {

    }

    int x;
    std::cin >> x;

    switch (x) {
    case 1:
        std::cout << "A";
        break;
    case 2:
        std::cout << "B";
        break;
    default:
        std::cout << "C";
        break;
    }

    while (/* bool-expression */) {
        // body
    }

    do {
        // body
    } while (/* bool-expression */)

    for (declaration | expression ; bool-expression; expression) {
        // body
    }

    return 0;
}