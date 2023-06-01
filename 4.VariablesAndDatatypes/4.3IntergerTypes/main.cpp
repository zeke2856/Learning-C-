#include <iostream>

int main(){

    // Braced Initializers
    // Variable may contain random garbage value . WARNING
    bool run_animals = false;
    if (run_animals){
            int elephant_count; 
            int lion_count {}; // Initiallizes to Zero
            int dog_count {10}; // Initiallizes to 10
            int cat_count {15}; // Initiallizes to 15

            // can use an expression as an initiallizer
            int domesticated_animals {dog_count + cat_count};

            std::cout <<  "elephant_count : " << elephant_count << std::endl;
            std::cout <<  "lion_count : " << lion_count << std::endl;
            std::cout <<  "dog_count : " << dog_count << std::endl;
            std::cout <<  "cat_count : " << cat_count << std::endl;
            std::cout << "domesticated_animals : " << domesticated_animals << std::endl;
    }

    bool run_fruit = false;
    if (run_fruit){
            
        // Functional Initialization
        int apple_count(5);
        int orange_count(10);
        int fruit_count (apple_count + orange_count);

        //Information lost. less safe than braced initiallizers
        int narrowing_conversion_functional (2.9);

        std::cout << "Apple count : " << apple_count << std::endl;
        std::cout << "Orange count : " << orange_count << std::endl;
        std::cout << "fruit_count : " << fruit_count << std::endl;
        std::cout << "narrowing_conversion_functional : " << narrowing_conversion_functional << std::endl;

        // implicit conversion error
        // int narrowing_conversion {2.9};
        // std::cout <<  "narrowing_conversion : " << narrowing_conversion << std::endl;
    }

    bool run_cars = true;
    if (run_cars){
        int bike_count = 2;
        int truck_count = 7;
        int vehicle_count = bike_count + truck_count;
        int narrowing_conversion_assignment = 2.9;

        std::cout << "Bike Count : " << bike_count << std:: endl;
        std::cout << "Truck count : " << truck_count << std::endl;
        std::cout << "Vehicle Count" << vehicle_count << std::endl;
        std::cout << "Narrowing conversion : " << narrowing_conversion_assignment << std::endl;

        // Check th size of with sizeof
        std::cout << "sizeof int : " << sizeof(int) << std::endl;
        std::cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;

    }

    return 0;
}