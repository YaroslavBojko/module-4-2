#include <iostream>

int main() {
    int number1;
    std::cout << "Enter the first number: ";
    std::cin >> number1;

    int number2;
    std::cout << "Enter the second number: ";
    std::cin >> number2;

    int sum;
    std::cout << "Enter their amount: ";
    std::cin >> sum;

    std::cout << "-----Checking-----" << std::endl;

    if (number1 + number2 == sum)
        std::cout << "Right!" << std::endl;
    else
        std::cout << "Error! Correct result: " << number1 + number2;
}
