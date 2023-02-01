/*
Exercise 6

Ask the user for a string and print out whether this string is a palindrome or not.
(A palindrome is a string that reads the same forwards and backwards.)
*/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(){

    string uinput;
    string rinput;

    cout << "Write a palindrome:\n";
    cin >> uinput;
    
    // copy the userinput and then revers rinput in place.
    rinput = uinput;
    reverse(rinput.begin(), rinput.end());

    // check if the string is equal to its reversed version.
    if (rinput == uinput){
        cout << uinput << " is a palindrome" << endl;
    }
    else{
        cout << uinput << " is not a palindrome" << endl;
    }
    
    return 0;
}