#include <iostream>


int main(){

    int condition {-39};

    bool bool_condition = condition;

    std::cout << std::boolalpha;
    std::cout << "We have a " << bool_condition << " in our variable " << std::endl; // different from 0

    if(bool_condition){
        std::cout << "We have a " << bool_condition << " in our variable " << std::endl; // different from 0
    }else
    {
        std::cout << "We have " << bool_condition << " in our variable" << std::endl; // zero
    }
    
    
    return 0;
}