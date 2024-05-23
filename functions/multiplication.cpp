#include <iostream>

int multiply(int num1, int num2)
{
	int result = num1 * num2;
	return result;
}

int main()
{
	int first_number, second_number, result;

	std::cout << "Please enter the first number: " << std::endl;
	std::cin >> first_number;

	std::cout << "Please enter the second number: " << std::endl;
	std::cin >> second_number;

	result = multiply(first_number, second_number);
	std::cout << "The result of the multiplication is: " << result << std::endl;

	return 0;
}


