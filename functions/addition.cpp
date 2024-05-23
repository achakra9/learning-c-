#include <iostream>

int addNumbers(int first_number, int second_number)
{
	int result = first_number + second_number;
	return result;
}

int main()
{
	int first_number {13};
	int second_number {7};

	std::cout << "First number : " << first_number << std::endl;
	std::cout << "Second number : " << second_number << std::endl;

	std::cout << "The sum of the two numbers is : " << addNumbers(first_number,second_number) << std::endl;
	return 0;
}
