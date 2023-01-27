'''
Exercise 6

Ask the user for a string and print out whether this string is a palindrome or not.
(A palindrome is a string that reads the same forwards and backwards.)
'''


# Declare Variables

u_input = str()
r_input = str()
index = 1


# Modules

def main():

    u_input = input('Give me a palindrome:\n')

    for letter in u_input: 
        r_input += (u_input[-index])
        index += 1

    if r_input == u_input:
        print('{} is a palindrome'.format(u_input))
    else:
        print('{} is not a palindrome'.format(u_input))


# Start of Script

if __name__ == "__main__":

    main()