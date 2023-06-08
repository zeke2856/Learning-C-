#include <iostream>

int main(){

    auto value = 5;

    std::cout << "The value is (incrementing) : " << value++ << std::endl;
    std::cout << "The value is : " << value << std::endl;
    
    std::cout << std::endl;

    //Decrement with postfix

    //reset value 
    value = 5;

    std::cout << "The value is (decrementing) : " << value-- << std::endl;
    std::cout << "The value is : " << value << std::endl;


    //
    value = 5;
    ++value;
    std::cout << "The value is (prefix++) : " << value << std::endl;

    //
    value = 5;
    --value;
    std::cout << "The value is (prefix--) : " << value << std::endl;
    
    return 0;
}