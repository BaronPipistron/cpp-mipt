#include <iostream>
#include <vector>

#if 0
int x = 0;

int main() {
    int x = 0;
    for (int i = 0; i < 10; ++i) {
        int x = i;
        std::cout << x; // local x in for
        std::cout << ::x; // global scope x
    }
}
#endif

namespace N {
    int x = 5;
}

int main() {
    using N::x;
    using x = std::vector<int>; // redeclared as different kind oof entity

    std::cout << x;
}