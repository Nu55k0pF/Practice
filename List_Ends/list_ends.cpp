/*
Exercise 12 (and Solution)

Write a program that takes a list of numbers (for example, a = [5, 10, 15, 20, 25]) and makes a new list of only the first and last elements of the given list. For practice, write this code inside a function.
Concepts to practice

    Lists and properties of lists
    List comprehensions (maybe)
    Functions

Since i feel, like my python skills have come back I will now focus on doing the C++ application first.
I may feel like skipping the Python challange all together if I find it to easy. e.g. like this one
*/


// Imports

#include <vector>
#include <iostream>

using namespace std;

// Modules

vector <int> vector_end(vector <int> input_vector){
    
}


int main(){

    vector <int> a (5, 10, 15, 20, 25);
    vector <int> b;
    
    b = vector_end(a);

    for(int i : b){
        cout << i << endl;
    }

    return 0;

}