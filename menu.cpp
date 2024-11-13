#include <iostream>

int main()
{
    std::cout << "1: Print help " << std::endl;

    std::cout << "2: Print exchange stats" << std::endl;

    std::cout << "3: Make an offer " << std::endl;

    std::cout << "4: Make a bid " << std::endl;

    std::cout << "5: Print wallet " << std::endl;

    std::cout << "6: Continue " << std::endl;

    std::cout << "============== " << std::endl;
    std::cout << "Type in 1-6" << std::endl;

    int userOption;
    std::cin >> userOption;
    std::cout << "You chose: "  << userOption << std::endl;
    
    return 0;
}