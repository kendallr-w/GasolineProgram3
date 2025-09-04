#include <iostream>

int main()
{
    std::cout << "Enter your car's fuel efficiency (in mpg (or kpl))\n";

    int fuelEfficiency = 0;//= 57.7; //.7 gets "truncated"
    //intializing ALL variables when you declare them is a good idea
    int tankCapacity;

    //remember what a "BREAKPOINT" is, it's useful

    std::cin >> fuelEfficiency;

    std::cout << "You entered fuel efficiency = " << fuelEfficiency << " miles per gallon\n";
    
    std::cout << "Enter your vehicle's fuel tank capacity = " << tankCapacity << " gallons\n";
    std::cin >> tankCapacity;

    int tankCapacity = 13;// gallons"
    int travelRange = fuelEfficiency * tankCapacity;

    std::cout << "You can go this many miles on a full tank:\n"
        << travelRange << "\n";
}
