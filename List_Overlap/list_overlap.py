'''
Take two lists, say for example these two:

  a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
  b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]

and write a program that returns a list that contains only the elements that are common between the lists (without duplicates). Make sure your program works on two lists of different sizes.

Extras:

    1. Randomly generate two lists to test this
    2. Write this in one line of Python (don’t worry if you can’t figure this out at this point - we’ll get to it soon)

'''

# Imports

import random


# Mudoles

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


# Initialize variables

a = create_randome_list(100)
b = create_randome_list(100)


# Start of script

print(a)
print(b)
print(set(a).intersection(set(b)))