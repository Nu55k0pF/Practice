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
        static bool searchElement(List<int> orderdList, int subject)
        {
            bool isInList = false;
            
            for (int i = 0; i < orderdList.Count; i++)
            {
                if (orderdList[i] == subject)
                {
                    isInList = true;
                }
                else
                {
                    continue;
                }
            }
            return isInList;
        }
        
        static void Main(string[] args)
        {
            //Create a list of ints
            List<int> l = new List<int> (new int[] {1, 2, 5, 6, 9, 10, 12, 15, 61, 73, 94, 110});
            int num = 42;
            foreach (int aNum in l)
            {
            Console.Write(aNum + ", ");
            }
            Console.WriteLine(num);

            bool resutl = searchElement(l, num);
            Console.WriteLine(resutl);
        }
    }

}