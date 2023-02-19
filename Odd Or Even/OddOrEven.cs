/*
Exercise 2 (and Solution)

The exercise comes first (with a few extras if you want the extra challenge or want to spend more time), followed by a discussion. Enjoy!

Ask the user for a number. Depending on whether the number is even or odd, print out an appropriate message to the user. 
Hint: how does an even / odd number react differently when divided by 2?

Extras:

    1. If the number is a multiple of 4, print out a different message.
    2. Ask the user for two numbers: one number to check (call it num) and one number to divide by (check). If check divides evenly into num, tell that to the user. 
    If not, print a different appropriate message.
*/

namespace OddOrEven
{
    class OddOrEven
    {
        static void Main(string[] args)
        {
            int uNumber, divident, divisor;

            Console.WriteLine("Give me a randome number.");
            string uNumberInput = Console.ReadLine();
            if (!int.TryParse(uNumberInput, out uNumber))
            {
                
            }

            if (uNumber % 4 == 0)
            {
                Console.WriteLine(uNumber + " is a multiple of 4.");
            }
            else if (uNumber % 2 == 0)
            {
                Console.WriteLine(uNumber + " is an even number.");
            }
            else
            {
                Console.WriteLine(uNumber + " is an odd number.");
            }

            Console.WriteLine("Now give me a different number to devide:");
            string dividentInput = Console.ReadLine();
            if (!int.TryParse(dividentInput, out divident))
            {
                
            }
            Console.WriteLine("Now give me a number to devide by:");
            string divisorInput = Console.ReadLine();
            if (!int.TryParse(divisorInput, out divisor))
            {
                
            }
            if (divident % divisor == 0)
            {
                Console.WriteLine("Your numbers devide evenly");
            }
            else
            {
                Console.WriteLine("Your numbers don't devide evenly.");
            }
        }
    }
}