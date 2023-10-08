// input Output.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

/*
    Statement:      Purpose:
    std::cout       Prints data to the console.
    std::cin        Reads data from the console.
    std::cerr       Prints errors to the console.
    sd::clog        Ptints log messages to the console.
*/

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "The number is : " << 12 << std::endl;
    
    int agee { 21 };
    std::cout << "The age is : " << agee << std::endl;

    //Error
    std::cerr << "std::cerr output : Something went wrong" << std::endl;

    //Log Message
    std::clog << "std::clog output : This is a log message" << std::endl;

    // Reading data in
    int age = 0;
    std::string name = "";

    // outputting a request for the last name and getting a response 
    std::cout << "Please type in your Last Name: " << std::endl;
    std::cin >> name;

    // outputting a request for an age and getting a response
    std::cout << "Please type in your age: " << std::endl;
    std::cin >> age;

    std::cin;

    // outputting the response
    std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;

    //discard characters until newline is found (clearing the buffer.)
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // reading data with spaces:
    int age2 = 0;
    std::string fullName = "";

    std::cout << "Please type in your full name : " << std::endl;
    std::getline(std::cin, fullName);

    std::cout << "Please type in your age: " << std::endl;
    std::cin >> age2;

    std::cout << "Hello " << fullName << "! You are " << age2 << " years old" << std::endl;

    return 0;
}

