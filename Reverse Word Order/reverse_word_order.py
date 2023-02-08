"""
Exercise 15

Write a program (using functions!) that asks the user for a long string containing multiple words. 
Print back to the user the same string, except with the words in backwards order. For example, say I type the string:

-  My name is Michele

Then I would see the string:

- Michele is name My

shown back to me.
"""

# Modules

def reverse_string_1(string_to_reverse: str) -> str:
    """ Takes a string and reverses it. """

    reversed_wordorder = []
    for word in string_to_reverse.split():
        reversed_wordorder.append(word)
    return " ".join(reversed_wordorder[::-1])


def reverse_string_2(string_to_reverse: str) -> str:
    """ Takes a string and reverses it. """

    word_list = string_to_reverse.split()
    word_list.reverse()
    return " ".join(word_list)


def main():

    teststring = "My name is Michele"

    print(reverse_string_1(teststring))
    print(reverse_string_2(teststring))


if __name__ == "__main__":
    main()