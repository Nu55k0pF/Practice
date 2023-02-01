/*
Take a list, say for example this one:

  a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]

and write a program that prints out all the elements of the list that are less than 5.

Extras:

    1. Instead of printing the elements one by one, make a new list that has all the elements less than 5 from this list in it and print out this new list.
    2. Write this in one line of Python.
    3. Ask the user for a number and return a list that contains only elements from the original list a that are smaller than that number given by the user.

*/


/*
I realized that my base solution is already solution 1 so this one
is what the base solution should have been.
*/
#include <vector>
#include <iostream>
using namespace std;

int main(){

    // declare an array
    int a[11] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};

    // loop through the arry and print every element < 5
    for (int number : a){
        if(number < 5){
            cout << number << endl;
        }
    }

    return 0;
}
