"""
Exercise 14

Write a program (function!) that takes a list and returns a new list that contains all the
elements of the first list minus all the duplicates.

Extras:

    Write two different functions to do this - one using a loop and constructing a list, and another using sets.
    Go back and do Exercise 5 using sets, and write the solution for that in a different function.
"""

def remove_duplicates_1(input_list: list) -> list:
    """ Take a list and return a list without any duplicates. """

    output = set(input_list)
    return list(output)

def remove_duplicates_2()