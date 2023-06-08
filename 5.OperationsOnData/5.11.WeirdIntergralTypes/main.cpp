#include <iostream>

int main(){
    short int var1 {10};
    short int var2 {20};

    char var3 {30};
    char var4 {40};

    std::cout << "size of var1 : " << sizeof(var1) << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << std::endl;
    std::cout << "size of var3 : " << sizeof(var3) << std::endl;
    std::cout << "size of var4 : " << sizeof(var4) << std::endl;

    short int result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "result1 : " << result1 << std::endl;
    std::cout << "size of result1 : " << sizeof(result1) << std::endl;
    std::cout << "result2 : " << result2 << std::endl;
    std::cout << "size of result2 : " << sizeof(result2) << std::endl;

    return 0;
}