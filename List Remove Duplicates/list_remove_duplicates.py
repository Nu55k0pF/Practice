"""
Exercise 14

Write a program (function!) that takes a list and returns a new list that contains all the
elements of the first list minus all the duplicates.

Extras:

    Write two different functions to do this - one using a loop and constructing a list, and another using sets.
    Go back and do Exercise 5 using sets, and write the solution for that in a different function.
"""

def remove_duplicates_1(input_list: list) -> list:
    """ Take a list and return a list without any duplicates using sets. """

    output = set(input_list)
    return list(output)


def remove_duplicates_2(input_list: list) -> list:
    """ Take a list and return a list without any duplicates using a for loop. """

    output_list = []
    for x in input_list:
        if x not in output_list:
            output_list.append(x) 
    return output_list


def main():

    a = [1, 1, 2, 4, 5, 5]

    print(remove_duplicates_1(a))
    print(remove_duplicates_1(a))


if __name__ == "__main__":
    main()