#include <iostream>

int main()
{
    bool redLight{ false };
    bool greenLight{ true };

    if (redLight == true) {
        std::cout << "Stop!" << std::endl;
    } else {
        std::cout << "Go through" << std::endl;
    }

    if (greenLight) {
        std::cout << "The light is green!" << std::endl;
    } else {
        std::cout << "The light is NOT green!" << std::endl;
    }

    // Printing out a bool
    // 1 -> true
    // 0 -> false
}