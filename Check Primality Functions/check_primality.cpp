/*
Ask the user for a number and determine whether the number is prime or not. 
(For those who have forgotten, a prime number is a number that has no divisors.). 
You can (and should!) use your answer to Exercise 4 to help you. 
Take this opportunity to practice using functions, described below.

Concepts for this week:

    Functions
    Reusable functions
    Default arguments

This time I will start with the C++ program
*/

#include <iostream>
#include <vector>
#include <numeric>
#includeA<limits>


using namespace std;

// Modules

bool check_primality(int number_to_check){

    switch (number_to_check)
    {
    case 0:
        cout << "It is debateble if 0 is prime";
        return true;

    case 1:
        return true;

    case 2:
        return true;
    
    default:
        vector <int> numbers_to_test (number_to_check-1);
        iota(begin(numbers_to_test), end(numbers_to_test), 2);
            for (int n : numbers_to_test){
                // If mod n is unequal 0 it means the number is not diviseble
                if (number_to_check % n == 0){
                    return false;
                } 
                else{
                    return true;
                } 
            }

        break;
    }
}


int main(){

    // Initializing variables
    int user_number;
    vector <int> primes (2);

    // Get valid user input
    while(true){
        cout << "Let's test if a number is prime.\n";
        cout << "Give me a number to test.\n";
        if (cin >> user_number) {
            break;
        } 
        else {
            cout << "Enter a valid integer value!\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    
    // Check for primality and print the result
    if (check_primality(user_number)){
        cout << "This number is prime.\n";
    }
    else {
        cout << "This number is not prime.\n";
    }
    return 0;
}