#include <iostream>
#include <string>

int main() {
    std::string s = "abc";

    std::cout << s << std::endl;
    std::cout << s[3] << std::endl;
    std::cout << static_cast<int>(s[3]) << std::endl;

    s.at(1) = 'x';
    std::cout << s << std::endl;

    try {
        s.at(3) = 'y'; // если аргумент at >= size, то исключение
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    s.back() = 'y';
    std::cout << s << std::endl;

    try {
        std::string s1 = "";
        s1.back() = 'x'; // UB
        std::cout << s1 << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}