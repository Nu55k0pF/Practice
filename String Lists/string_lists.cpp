#include <iostream>
#include <string>

using namespace std;


int main(){

    string uinput;
    string rinput;

    cout << "Write a palindrome:\n";
    cin >> uinput;

    for (string::reverse_iterator rit=uinput.rbegin(); rit!=uinput.rend(); ++rit){
        cout << *rit; //TODO: convert rit to char
        
        // rinput.append(*rit);
    }
    // compare returns an int. If the strings are equal compare will return 0
    // if (uinput.compare(reverse_input) == 0){
    //     cout << uinput + " is a palindrome.";
    // }
    // else {
    //     cout << uinput + " is not a palindrome.";
    // }
    return 0;
}