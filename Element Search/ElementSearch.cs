/*
Element Search

Write a function that takes an ordered list of numbers (a list where the elements are in order from smallest to largest)and another number.
The function decides whether or not the given number is inside the list and returns (then prints) an appropriate boolean.

Extras:

    Use binary search.
*/
using System;
using System.Collections.Generic;

namespace ElementSearch
{
    class ElementSearch
    {
        static List<int> searchElement(List orderdList, int subject)
        {
            for (int i = 0; i < orderdList.Count; i++)
            {

            }
        }
        
        static void Main(string[] args)
        {
            //Create a list of ints
            List<int> l = new List<int>() {1, 2, 5, 6, 9, 10, 12, 15, 61, 73, 94, 110};
            int num = 1;
            Console.WriteLine(l);
        }
    }

}