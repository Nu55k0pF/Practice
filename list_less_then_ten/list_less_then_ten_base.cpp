/*
Take a list, say for example this one:

  a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]

and write a program that prints out all the elements of the list that are less than 5.

Extras:

    1. Instead of printing the elements one by one, make a new list that has all the elements less than 5 from this list in it and print out this new list.
    2. Write this in one line of Python.
    3. Ask the user for a number and return a list that contains only elements from the original list a that are smaller than that number given by the user.

*/

#include <vector>
#include <iostream>
using namespace std;

int main(){

    // declare an array
    int a[11] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};

    // declare an empty vector
    vector <int> b;

    // loop through a and add every int < 5 to b
    for (int num : a){
        if (num < 5){
            b.push_back(num);
        }
    }

    // print out the contents of b
    for (int num : b){
        cout << num << ", ";
    }

    return 0;
}
