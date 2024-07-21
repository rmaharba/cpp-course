#include <iostream>

int main()
{
    int age;
    std::cout << "Can you vote? Let's see! What is you age?: ";
    std::cin >> age;

    if (age > 17)
    {
        std::cout << "Yes, you can vote!" << std::endl;
    }
    else
    {
        std::cout << "Not, you can't vote!" << std::endl;
    }

    return 0;
}
