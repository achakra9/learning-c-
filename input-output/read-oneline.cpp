//
#include <iostream>

int main()
{
	std::string name;
	int age;

	std::cout << "Please enter you name and age: " << std::endl;
	// Now, let's read this data
	std::getline(std::cin, name);
	std::cin >> age;
	
	std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;

	return 0;
}
	
