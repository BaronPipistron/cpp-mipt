#include <iostream>

namespace N {
    int x;
}

namespace NN {
    using N::x;
    int y;
}

using N::x;

int main() {
    std::cout << x;
}
