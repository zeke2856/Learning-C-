#include <iostream>

int main(){
    
    // Compile time error
    std::cout << "Hi Jeff" << std::endl//;

    // Run time error
    // May not show up on compile but just comes across as the computer giving up
    int value = 7/0;
    std::cout << "value : " << value << std::endl;
    
    return 0;
}
