/*
Create a program that asks the user for a number and then prints out a list of all the divisors of that number. 
(If you don’t know what a divisor is, it is a number that divides evenly into another number
For example, 13 is a divisor of 26 because 26 / 13 has no remainder.)
*/

#include <iostream>
#include <numeric>
#include <vector>

int main() {

    int number;

    // get user input
    std::cout << "Give a number: ";
    std::cin >> number;

    // creat a vector with all the numbers to test
    std::vector <int> numbers_to_test (number);
    std::iota(std::begin(numbers_to_test), std::end(numbers_to_test), 2);

    // calculate all the numbers that device "number" with no remainder
    for(int n : numbers_to_test){
        if (number % n == 0){
            std::cout << n << std::endl;
        }
    }
    return 0;
}