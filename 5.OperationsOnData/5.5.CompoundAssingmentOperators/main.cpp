#include <iostream>

int main(){
    int value  {45};

    std::cout << "The vlaue is : " << value << std::endl;

    std::cout<< std::endl;
    value +=5;
    std::cout << "The value is (after +=5) : " << value << std::endl;
    
    std::cout<< std::endl;
    value -=5;
    std::cout << "The value is (after -=5) : " << value << std::endl;

    std::cout<< std::endl;
    value *=2;
    std::cout << "The value is (after *=2) : " << value << std::endl;

    std::cout<< std::endl;
    value /=3;
    std::cout << "The value is (after /=3) : " << value << std::endl;

    std::cout<< std::endl;
    value %=11;
    std::cout << "The value is (after %=11) : " << value << std::endl;

    return 0;
}