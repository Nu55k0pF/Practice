"""
Element Search

Write a function that takes an ordered list of numbers (a list where the elements are in order from smallest to largest)and another number.
The function decides whether or not the given number is inside the list and returns (then prints) an appropriate boolean.

Extras:

    Use binary search.
"""

# Imports

import random


# Modules

def create_randome_list(size):
    '''
    Create a list with randome values

    Parameters:
    ____
    Size: Integer to determin how big the pool of choices should be.

    Returns:
    A list with randome integers    
    '''
    
    pool = range(int(size))
    sample_size = random.choice(pool)
    return random.sample(pool, k=sample_size)


def search_element(sample: list, subject: int) -> bool:
    '''
    Search a list for the subject. Return True or False accordingly

    Parameters:
    ____
    sample: the list to sort through
    subject: the item to look for in the list

    Returns:
    Bool
    '''
    
    is_in_list = False

    for i in sample:
        if i == subject:
            is_in_list = True
            return is_in_list
        else:
            continue
    
    return is_in_list
    

def binary_search_element(sample: list, subject: int) -> bool:
    '''
    Search a list for the subject. Implemented as a binary search algorithem. Return True or False accordingly.

    Parameters:
    ____
    sample: the list to sort through
    subject: the item to look for in the list

    Returns:
    Bool
    ''' 

    is_in_list = False

    # Copy the list in case its needed for something else.
    temp = sample.copy()

    # The loop will half the list every iteration, when there is only one element left, stop.
    while len(temp) > 1:
        mid = round(len(temp)/2) # Calculate the index that lies in the middle of the list.
        if temp[mid] == subject: # Cehck if the number at the middle of the list is the subject number. Return True if true
            return True
        elif temp[mid] > subject: # Check if the subject number is smaller then the middle of the list, if so discard the later half of the list.
            temp = temp[:mid]
        else:
            temp = temp[mid:] # Discard the first half of the list because the subject number must be bigger then the middle

    # If the loop finishes without finding the subject number return "is_in_list" wich is False by default
    return is_in_list


def main():
    
    l = create_randome_list(50)
    l.sort()
    num = 1
    print(l)
    print(search_element(l, num))
    print(binary_search_element(l, num))


if __name__ == "__main__":
    main()