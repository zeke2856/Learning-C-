#include <iostream>

int main(){

    std::cout << std::boolalpha;
    std::cout << "true && false : " << (true && false) << std::endl;
    std::cout << "true && true : " << (true && true) << std::endl;
    std::cout << "false && false : " << (false && false) << std::endl;

    std::cout << "true || false : " << (true || false) << std::endl;
    std::cout << "true || true : " << (true || true) << std::endl;
    std::cout << "false || false : " << (false || false) << std::endl;

    std::cout << "true && false || true: " << (true && false || true) << std::endl;
    std::cout << "false && false || true: " << (false && false || true) << std::endl;
    std::cout << "false || false && true: " << (false || false && true) << std::endl;
    std::cout << "true && true : " << (true && true) << std::endl;
    std::cout << "false && false : " << (false && false) << std::endl;
    std::cout << "true && !false : " << (true && !false) << std::endl;

    return 0;
}