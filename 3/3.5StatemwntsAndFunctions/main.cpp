#include <iostream>

int addNumbers(int first_parameter, int second_parameter){
    
    int result = first_parameter +second_parameter;
    return result;

}

int main(){
    int first_number = {13};
    int second_number = {7};

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl;
 
    std::cout << "Sum : " << addNumbers(30,54) << std::endl;

    return 0;
}