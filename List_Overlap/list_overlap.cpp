/*
Take two lists, say for example these two:

  a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
  b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]

and write a program that returns a list that contains only the elements that are common between the lists (without duplicates). Make sure your program works on two lists of different sizes.

Extras:

    1. Randomly generate two lists to test this
    2. Write this in one line of Python (don’t worry if you can’t figure this out at this point - we’ll get to it soon)

*/

// Includes

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){

// Declare variables

vector <int> a = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
vector <int> b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
vector <int> c;

// Start of Program

    for (int number_from_a : a){
        for (int number_from_b: b){
            if (number_from_a == number_from_b){
                c.push_back(number_from_a);
                cout << number_from_a << endl;
                }
            }
        }
    return 0;
}
