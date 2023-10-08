// Statements And Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Brings in the iostream library
#include <iostream>

/*                                     Statements: 
    - A statement is a basic unit of computation in a C++ program.
    - Every C++ program is a collection of staments organized in a certain way to achieve some goal.
    - Statements end with a semicolon.
    - Statements are excecuted in order from top to bottom when the program is run.
    - Excecution keeps going until there is a statement causing the program to terminate, or run another requence of statements.
*/ 

/*                                                              Funtions:
    - A function must be defined before it is used. You cannot call a function that you have not defined in a C++ program.
    - A reusable piece of code that group together a bunch of statements.
*/

// function to add two numbers.
int addNumbers(int first_number, int second_number) {
    int sum = first_number + second_number;
    return sum;
}

double multiplyNumbers(double firstNumber, double secondNumber) {
    double result = firstNumber * secondNumber;
    return result;
}


// Starting point of the program.
int main()
{
    int firstNumber = 12;
    int secondNumber = 9;

    int sum = firstNumber + secondNumber;


    std::cout << "The sum of the two numbers is: " << sum << std::endl;
    std::cout << "The multiplication of the two numbers is: " << multiplyNumbers(firstNumber, secondNumber) << std::endl;

    return 0;
    // program ends here
}
