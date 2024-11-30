#include <iostream>

void printHello()
{
    std::cout << "Hello " << std::endl;
}
/** compute the average of x and y */
float average(float x, float y)
{
    return (x+y) / 2;
}

int main()
{
    printHello();
    float z = average(15, 7.5);
    std::cout << z << std::endl;
    
    std::cout << "Type in a number: " << std::endl;

    int x;
    std::cin >> x;

    std::cout << "You typed: " << x << std::endl;

    return 0;
}