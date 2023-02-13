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


# Modules

def set_charachter_pool(*, level: int) -> str:
    """ Utility function to returnn the apropriate char set for the generate password function. """
    group_1 = string.ascii_lowercase
    group_2 = string.ascii_uppercase
    group_3 = string.digits
    group_4 = string.punctuation

    char_set = [group_1, group_2, group_3, group_4]

    return "".join(char_set[:level])
    

def generate_password(*, strenght: int=1, length: int=8) -> str:
    """ Generates a pseudo random password of the chosen length and strength. """
    
    charachter_pool = set_charachter_pool(level=strenght)
    passord = []

    for i in range(length):
        passord.append(random.choice(charachter_pool))

    return "".join(passord)


def main():

    # Setting up argparser
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-l",
        "--length",
        help="Set length of password.")
    parser.add_argument(
        "-s",
        "--strength",
        help="1 = only lowercase letters, 2 = lower and uppercase letters, 3 = digits, lower and upper case, 4 = adds punctuation.")
    args = parser.parse_args()

    # Passwort generation
    if args.strength and args.length is not None:
        pw_strength = int(args.strength)    
        pw_length = int(args.length)
        print(generate_password(strenght=pw_strength, length=pw_length))
    else:
        print("Usage example:\n\npassword_generator.py -l 10 -s 4")

if __name__ == "__main__":
    main()