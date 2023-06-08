#include <iostream>

int main(){
    int var1{123};
    std::cout << "var 1 : " << var1 << std::endl;

    var1 = 55;
    std::cout << "var 1 : " << var1 << std::endl;

    std::cout << std::endl;

    double var2{69.69};
    std::cout << "var 2 : " << var2 << std::endl;

    var2 = 99.99;
    std::cout << "var2 : " << var2 << std::endl;

    auto var3 {333u};
    var3 = -22;// returns garbage value because unsigned ints are incapable of storing negative numbers
    std::cout << "var3 : " << var3 << std::endl;

    bool state{false};
    std::cout << std::boolalpha;
    std::cout << "state : " << state << std::endl;

    state = true;
    std::cout << "state : " << state << std::endl;

    return 0;
}