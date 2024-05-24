#include <iostream>

int main()
{
	int num1 = 15; // decimal
	int num2 = 017; // octal
	int num3 = 0x0F; // hexadcimal
	int num4 = 0b00001111; // binary

	std::cout << "The number is : " << num1 << std::endl;
	std::cout << "The number is : " << num2 << std::endl;
	std::cout << "The number is : " << num3 << std::endl;
	std::cout << "The number is : " << num4 << std::endl;

	return 0;
}
