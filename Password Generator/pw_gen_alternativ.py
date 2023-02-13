"""
Exercise 16

Note: this is a 4-chili exercise, not because it introduces a concept, but because this exercise is more like a project. 
Feel free to skip this and come back when you’re more ready!

Write a password generator in Python. Be creative with how you generate passwords - 
strong passwords have a mix of lowercase letters, uppercase letters, numbers, and symbols. 
The passwords should be random, generating a new password every time the user asks for a new password. 
Include your run-time code in a main method.

Extra:

    Ask the user how strong they want their password to be. For weak passwords, pick a word or two from a list.
"""


# Imports

import random
import string
import argparse


# Constants

GROUP_1 = string.ascii_lowercase
GROUP_2 = string.ascii_uppercase
GROUP_3 = string.digits
GROUP_4 = string.punctuation


# Modules

class Password:
    def __init__(self, length: int, strength: int ) -> None:
        self.length = length
        self.strength = strength
        self.password_string = self.pw_generate()


    def __repr__(self) -> str:
        return self.password_string


    def pw_generate(cls) -> str:
        """ Generates a pseudo random password of the chosen length and strength. """
    
        charachter_pool = cls.set_charachter_pool()
        passord = []
        for i in range(cls.length):
            passord.append(random.choice(charachter_pool))

        return "".join(passord)


    def set_charachter_pool(self) -> str:
        """ Utility function to returnn the apropriate char set for the generate password function. """
        
        char_set = [GROUP_1, GROUP_2, GROUP_3, GROUP_4]

        return "".join(char_set[:self.strength])
    

# Main functionality

def main():

    pw = Password(4,4)
    print(pw)


if __name__ == "__main__":

    main()
