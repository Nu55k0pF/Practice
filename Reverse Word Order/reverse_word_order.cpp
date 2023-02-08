/*
Exercise 15

Write a program (using functions!) that asks the user for a long string containing multiple words. 
Print back to the user the same string, except with the words in backwards order. For example, say I type the string:

-  My name is Michele

Then I would see the string:

- Michele is name My

shown back to me.
*/

#include <string>
#include <iostream>

using namespace std;


string reverse_string(string string_to_reverse)
{
    string reversed_string (string_to_reverse.rbegin(), string_to_reverse.rend());
    return reversed_string;
}


int main()
{
    string test_string = {"My name is Michele"};
    string rev_string = reverse_string(test_string);

    cout << rev_string; 

    return 0;
}
/*
TODO: This reverses the full string not the word order! 
*/