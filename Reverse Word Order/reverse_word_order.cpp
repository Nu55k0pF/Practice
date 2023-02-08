/*
Exercise 15

Write a program (using functions!) that asks the user for a long string containing multiple words. 
Print back to the user the same string, except with the words in backwards order. For example, say I type the string:

-  My name is Michele

Then I would see the string:

- Michele is name My

shown back to me.
*/

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


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

// string reverse_string(vector <string> vector_to_reverse)
// {
//     string rev_string;
//     int index = vector_to_reverse.size();
//     for (index; index != 0; index--)
//     {
//         cout << vector_to_reverse[index];
//         //rev_string.append(vector_to_reverse[index]);
//         // rev_string.append(" ");
//     }
//     return rev_string;
// }


int main()
{
    string test_string = {"My name is Michele"};
    string delimiter = {" "};

    vector <string> test_vector = split(test_string, delimiter);
    reverse(test_vector.rbegin(), test_vector.rend());

    for (string word : test_vector)
    {
        cout << word << " ";
    }

    
    return 0;
}
/*
TODO: This reverses the full string not the word order! 
*/