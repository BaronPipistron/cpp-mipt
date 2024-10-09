#include <iostream>

namespace N {
    int x;
}

namespace NN {
    using N::x;
    int y;
}

using namespace N;

int main() {
    std::cout << x;
}