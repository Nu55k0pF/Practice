/*
Exercise 16

Note: this is a 4-chili exercise, not because it introduces a concept, but because this exercise is more like a project. 
Feel free to skip this and come back when you’re more ready!

Write a password generator in Python. Be creative with how you generate passwords - 
strong passwords have a mix of lowercase letters, uppercase letters, numbers, and symbols. 
The passwords should be random, generating a new password every time the user asks for a new password. 
Include your run-time code in a main method.

Extra:

    Ask the user how strong they want their password to be. For weak passwords, pick a word or two from a list.
*/

#include <vector>
#include <iostream>
#include <time.h>
#include <string.h>


using namespace std;

string generate_password(string charachter_set, int length)
{
    string password;
    for (int i = 0; i < length; i++)
    {
        int rand_index = rand() % charachter_set.size();
        // cout << charachter_set[rand_index];
        password += charachter_set[rand_index];
    }
    return password;
}


int main()
{
    srand (time(NULL));

    const string group_1 = {"abcdefghijklmnopqrstuvwxyz"};
    const string group_2 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string group_3 = {"0123456789"};
    const string group_4 = {"!§$%&/()=?#+-.,:;"};
    
    string strenght_1 = group_1;
    string strenght_2 = group_1 + group_2;
    string strenght_3 = group_1 + group_2 + group_3;
    string strenght_4 = group_1 + group_2 + group_3 + group_4;

    string pw;

    int length;
    int strenght;

    cout << "Set password length" << endl;
    cin >> length;
    cout << "Set password strength from 1 to 4" << endl;
    cin >> strenght;

    switch (strenght)
    {
        case 1:
            pw = generate_password(strenght_1, length);
            cout << pw;
            break;

        case 2:
            pw = generate_password(strenght_2, length);
            cout << pw;
            break;
        
        case 3:
            pw = generate_password(strenght_3, length);
            cout << pw;
            break;

        case 4:
            pw = generate_password(strenght_4, length);
            cout << pw;
            break;

        default:
            cout << "Error. No valid strength was chosen";
    }
    return 0;
}



