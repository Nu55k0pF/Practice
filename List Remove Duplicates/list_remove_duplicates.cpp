/*
Exercise 14

Write a program (function!) that takes a list and returns a new list that contains all the
elements of the first list minus all the duplicates.

Extras:

    Write two different functions to do this - one using a loop and constructing a list, and another using sets.
    Go back and do Exercise 5 using sets, and write the solution for that in a different function.
*/

#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;


/**
 * Remove duplicates with set
*/
vector <int> remove_duplicates_1(vector <int> input_vector)
{
    set <int> temp (input_vector.begin(), input_vector.end()); 
    vector <int> output_vector (temp.begin(), temp.end());
    return output_vector;
}

vector <int> remove_duplicates_2(vector <int> input_vector)
{
    vector <int> output_vector;
    for (int i : input_vector)
    {
        if (find(input_vector.begin(), input_vector.end(), i) != i)
        {
            output_vector.push_back(i);
        }
        else{}
    }
    return output_vector;
}

void print_vector (vector <int> vector_2_print)
{
    for (int i : vector_2_print)
    {
        cout << i << ", ";
    }
}

int main()
{
    vector <int> a = {1, 1, 2, 4, 5, 5};
    vector <int> b (remove_duplicates_1(a));
    vector <int> c (remove_duplicates_2(a));

    print_vector(b);
    print_vector(c);

    return 0;
}