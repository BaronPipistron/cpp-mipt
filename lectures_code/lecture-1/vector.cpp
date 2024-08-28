#include <iostream>
#include <vector>

std::ostream& operator << (std::ostream& os, const std::vector<int>& v) {
    for (size_t i = 0; i != v.size(); ++i) {
        os << v[i] << " ";
    }

    return os;
}

int main() {
    std::vector<int> v = {1, 2, 3};

    std::cout << "size = " << v.size() << std::endl;
    std::cout << "capacity = " << v.capacity() << std::endl;

    std::cout << v << std::endl;
    std::cout << v[2] << std::endl;

    v.at(1) = 4;
    std::cout << v << std::endl;

    try {
        v.at(3) = 5;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    v.push_back(10);
    v.push_back(11);
    std::cout << v << std::endl;

    v.pop_back();
    std::cout << v << std::endl;

    std::cout << "size = " << v.size() << std::endl;
    std::cout << "capacity = " << v.capacity() << std::endl;
    
    v.shrink_to_fit();
    std::cout << "size = " << v.size() << std::endl;
    std::cout << "capacity = " << v.capacity() << std::endl;

    v.clear();
    std::cout << "size = " << v.size() << std::endl;
    std::cout << "capacity = " << v.capacity() << std::endl;

    v.reserve(10);
    std::cout << "size = " << v.size() << std::endl;
    std::cout << "capacity = " << v.capacity() << std::endl;

    v.resize(4, 52);
    std::cout << v << std::endl;
    std::cout << "size = " << v.size() << std::endl;
    std::cout << "capacity = " << v.capacity() << std::endl;

    return 0;
}