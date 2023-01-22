/*
Exercise 2 (and Solution)

The exercise comes first (with a few extras if you want the extra challenge or want to spend more time), followed by a discussion. Enjoy!

Ask the user for a number. Depending on whether the number is even or odd, print out an appropriate message to the user. 
Hint: how does an even / odd number react differently when divided by 2?

Extras:

    1. If the number is a multiple of 4, print out a different message.
    2. Ask the user for two numbers: one number to check (call it num) and one number to divide by (check). If check divides evenly into num, tell that to the user. 
    If not, print a different appropriate message.
*/

#include <iostream>
#include <sstream>
using namespace std;

int main(){

    int u_number, divident, divisor;

    cout << "Give me a randome number.";
    cin >> u_number;
    string u_number_str = to_string(u_number);
    
    if (u_number % 2 == 0 && u_number % 4 == 0){
        cout << u_number_str + " is a multiple of 4.\n";
    }
    else if (u_number % 2 == 0)
    {
       cout << u_number_str + " is an even number.\n";
    }
    else
    {
        cout << u_number_str + " is an odd number.\n";
    }

    cout << "Now give me a different number to devide:\n";
    cin >> divident;
    cout << "Now give me a number to devide by:\n";
    cin >> divisor;

    if (divident % divisor == 0){
        cout << "Your numbers devide evenly.\n";
    }
    else
    {
        cout << "Your numbers don't devide evenly.\n";
    }
    return 0;
}