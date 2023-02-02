/*
Exercise 13 (and Solution)

Write a program that asks the user how many Fibonnaci numbers to generate and then generates them. 
Take this opportunity to think about how you can use functions. 
Make sure to ask the user to enter the number of numbers in the sequence to generate.
(Hint: The Fibonnaci seqence is a sequence of numbers where the next number in the sequence is the sum of the previous two numbers in the sequence. 
The sequence looks like this: 1, 1, 2, 3, 5, 8, 13, …)
Discussion

Practice functions!
*/


#include <vector>
#include <iostream>

using namespace std;


// Modules

vector<int> generate_fibonatcci_sequence(int length)
{
    vector <int> fibonatcci_sequence = {1, 1};
    if (length == 0)
    {
        vector <int> v = {};
        return v;
    }
    else if (length == 1)
    {
        vector <int> v = {1};
        return v;
    }
    else if (length > 2)
    {
        length -= 2;
        while (length > 0)
        {
            fibonatcci_sequence.push_back(fibonatcci_sequence.end()[-2] + fibonatcci_sequence.end()[-1]);
            length -= 1;
        }
    }
return fibonatcci_seqcuence;
}

int main ()
{
    int user_input;
    vector<int> fib;
    cout << "How many Fibonatcci numbers do you want to generate?\n";
    cin >> user_input;
    fib = generate_fibonatcci_sequence(user_input);

    for (int i : fib)
    {
        cout << i << endl;
    }
}