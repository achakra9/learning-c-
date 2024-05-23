#include <iostream>

int addNumbers(int firstNumber, int secondNumber){

    int sum = firstNumber + secondNumber;
    return sum;
}

int main(){

    // get or define the numbers
    int firstNumber = 12;
    int secondNumber = 9;

    // sum the numbers
    int sum1 = firstNumber + secondNumber;

    // sum using the function addNumbers
    int sum2 = addNumbers(firstNumber , secondNumber);
    
    // print the sum
    std::cout << "The sum of the two numbers is: " << sum1 << std::endl;
    std::cout << "The sum using a function: " << sum2 << std::endl;

    // terminate the program
    return 0;
}