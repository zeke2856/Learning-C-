#include <iostream>

int main(){
    
    auto a {6};
    auto b {3};
    auto c {8};
    auto d {9};
    auto e {3};
    auto f {2};
    auto g {5}; 
    
    int result = a + b * c - d / e - f + g;
    std::cout << "result : " << result << std::endl;

    result = a/b*c +d -e +f;
    std::cout << "result : " << result << std::endl;


    return 0;
}