#include <iostream>
#include <string>

/* Data Types:
	int - represents a whole number - 4 bytes
	double - represents a real number with decimals
	float - represens a floating point number
	char - represents a characteer
	bool - represents a boolean value (true/false)
	void - represents nothing, a typeless type
	auto - a keyword in C++ to deduce other types
*/

/* Number Systems:
	- base 10 (decimal)
	- base 2 (binary)
	- base 8 (ocatal)
	- base 16 (hexadecimal)
*/

int main()
{
	// Variables:
	int elephantCount; // variable may conain random garbage value
	int lionCount{}; //  initializes to zero
	int dogCount{ 10 }; // initializes to 10
	int catCount{ 15 }; // initializes to 15

	// can use expressions as initializer
	int donmesticatedAnimals{ dogCount + catCount };

	// number systems
	int decimal = 15; // decimal
	int octal = 017; // octal
	int hex = 0x0f; // hexadecimal
	int binary = 0b00001111; // binary
	// output result for all of these will = 15.

	std::cout << "Decimal is: " << decimal << std::endl;
	std::cout << "Octal is: " << octal << std::endl;
	std::cout << "Hexadecimal is: " << hex << std::endl;
	std::cout << "binary is: " << binary << std::endl;

	std::cout << "\n\n";

	// check sizes
	std::cout << "size of int in bytes: " << sizeof(int) << std::endl;
	std::cout << "size of dog count in bytes: " << sizeof(dogCount) << std::endl;
	std::cout << "\n\n";

	// unsinged int allows positive numbers while signed int allows both positive and negative numbers
}
