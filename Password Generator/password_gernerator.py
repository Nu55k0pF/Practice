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


# Modules

def set_charachter_pool(level: int) -> list:

    group_1 = string.ascii_lowercase
    group_2 = string.ascii_uppercase
    group_3 = string.digits
    group_4 = string.punctuation

    char_set = [group_1, group_2, group_3, group_4]

    


def generate_password(strenght: int, length: int) -> str:
    """ Generates a pseudo random password of the chosen length and strength. """
    
    charachter_pool = []
    passord = []

    for i in range(length):
        passord.append(random.choice(charachter_pool))

    return "".join(passord)

def main():

    generate_password(strenght=1, length=10)


# Constants




if __name__ == "__main__":
    main()