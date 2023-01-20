/*
Create a program that asks the user to enter their name and their age. Print out a message addressed to them that tells them the year 
that they will turn 100 years old. Note: for this exercise, the expectation is that you explicitly write out the year 
(and therefore be out of date the next year). If you want to do this in a generic way, see exercise 39.

Extras:

    Add on to the previous program by asking the user for another number and printing out that many copies of the previous message. 
    (Hint: order of operations exists in Python)
    Print out that many copies of the previous message on separate lines. 
    (Hint: the string is the same as pressing the ENTER button)
*/

#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string name;
    int age, number, i;
    int year = 2023;

    cout << "Give me your name: ";
    cin >> name; 
    cout << "Give me your age: ";
    cin >> age;
    cout << "Give me a randome number: ";
    cin >> number;

    int onehundred =  year + (100 - age);
    string s_onehundred = to_string(onehundred);
    string message = "Hello" + name + ", you will turn 100 in the year " + s_onehundred; 
    
    for(i=0; i<number; i++){
        cout << message << endl;
    }

    return 0;
} 