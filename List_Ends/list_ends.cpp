/*
Exercise 12 (and Solution)

Write a program that takes a list of numbers (for example, a = [5, 10, 15, 20, 25]) 
and makes a new list of only the first and last elements of the given list. 
For practice, write this code inside a function.
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
#include <cstdlib>
#include <time.h>

using namespace std;

// Modules

vector <int> vector_end(vector <int> input_vector){
  
    /**
     * Takes a vetcor containing integers and returning a vector with only the first and last
     * element of the input vector.
     * 
     * Parameters:
     * input_vector: vector of arbitrary lenth.
     * 
     * Returns:
     * a vector containing the first and last element of the input vector.
    */

    vector <int> output_vector {input_vector.front(), input_vector.back()};

    return output_vector;

}


vector <int> create_randome_vector(int range_of_numbers, int length_of_vector){

    vector <int> output_vector;
    
    // Initialize seed for pseudo randome number generation
    srand (time(NULL));

    for ( length_of_vector; length_of_vector > 0; --length_of_vector){
        output_vector.push_back(rand() % range_of_numbers + 1);
    }
    return output_vector;
}


int main(){

    // vector <int> a = {5, 10, 15, 20, 25};
    vector <int> a = create_randome_vector(100, 2);
    vector <int> b;
    
    b = vector_end(a);

    for(int i : b){
        cout << i << endl;
    }

    return 0;

}