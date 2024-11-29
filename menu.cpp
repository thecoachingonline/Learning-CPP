#include <iostream>

void printMenu()
{
    std::cout << "1: Print help " << std::endl;

    std::cout << "2: Print exchange stats" << std::endl;

    std::cout << "3: Make an offer " << std::endl;

    std::cout << "4: Make a bid " << std::endl;

    std::cout << "5: Print wallet " << std::endl;

    std::cout << "6: Continue " << std::endl;

    std::cout << "============== " << std::endl;

}

void printHelp()
{
    std::cout << "Help - you aim is to make money. Analysethe market and make bids and office " << std::endl;
}
void printMarketStats()
{
    std::cout << "Market looks good " << std::endl;
}
void enterOffer()
{
    std::cout << "Mark and offer - enter the amount " << std::endl;
}
void enterBid()
{
    std::cout << "Mark a bid - enter the amount " << std::endl;
}
void printWallet()
{
    std::cout << "Your wallet is empty." << std::endl;
}
void gotoNextTimeframe()
{
    std::cout << "Going to next time frame." << std::endl;
}

int getUserOption()
{
    int userOption;
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void processUerOption(int userOption)
{
    if (userOption == 0)
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1)
    {
        printHelp();
    }
    if (userOption == 2)
    {
        printMarketStats();
    }
    if (userOption == 3)
    {
        enterOffer();
    }
    if (userOption == 4)
    {
        enterBid();
    }
    if (userOption == 5)
    {
        printWallet();
    }
    if (userOption == 6)
    {
        gotoNextTimeframe();
    }
}

int main()
{
    while (true)
    {
        printMenu();
        int userOption = getUserOption();
        processUerOption(userOption);
    }
    return 0;