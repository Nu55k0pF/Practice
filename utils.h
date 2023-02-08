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

/**
 * Implementes a function to split strings like pythons string.split() method
 * 
 * Parameters:
 * ___________
 * string_to_split is the string to be split
 * delimiter: is the delimiting chararchter by which to split
 * 
 * Returns:
 * A vecotr that contains all the strings as seperat entrys split by the delimiter
 *  
 * https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
 * 
 */

vector <string> split (string string_to_split, string delimiter)
{
    vector <string> split_string;
    size_t pos = 0;
    string token;
    
    while ((pos = string_to_split.find(delimiter)) != string::npos) 
    {
        token = string_to_split.substr(0, pos);
        split_string.push_back(token);
        string_to_split.erase(0, pos + delimiter.length());
    }
    split_string.push_back(string_to_split);

    return split_string;
}


#endif