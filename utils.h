#ifndef UTISL_H
#define UTILS_H

/**
 * These are my utility functions for those exercises and other uses.
*/

#include <vector>
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

vector <int> create_randome_vector(int range_of_numbers, int length_of_vector){

    /**
     * A function to fill a vector with pseudo random numbers from 1 to n positiv numbers.
     * 
     * Parameters:
     * ___________ 
     * range_of_numbers: must be an integer. Selects the range up to that number from wich numbers are beeing chosen 
     * lenth_of_vector: must be an integer. Defines how many elemts should be in the output_vector.
     * 
     * Returns:
     * A vector with randome positive numbers
    */
   
    vector <int> output_vector;
    
    // Initialize seed for pseudo randome number generation
    srand (time(NULL));

    for ( length_of_vector; length_of_vector > 0; --length_of_vector){
        output_vector.push_back(rand() % range_of_numbers + 1);
    }
    return output_vector;
}

#endif