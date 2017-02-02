/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int min = 0;
    int max = n - 1;
    
    while (min <= max)
    {
        int midpoint = (min + max) / 2;
        if (value == values[midpoint])
        {
            return true;
        }
        else if (value > values[midpoint])
        {
            min = midpoint + 1;
        }
        else if (value < values[midpoint])
        {
            max = midpoint - 1;
        }
    }
 // TODO: implement a searching algorithm
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for (int i = 0; i < n; i++)
    {
     int min = i;
     
     for (int j = i + 1; j < n; j++)
     {
         if (values[j] < values[min])
         {
          min = j;   
         }
     }
     
     if (min != i)
     {
         values[min] = values[i];
     }
    }
    // TODO: implement an O(n^2) sorting algorithm
    
}