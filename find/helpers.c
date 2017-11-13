/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>
#include "helpers.h"


bool search(int value, int values[], int n)
{
int min = 0;
int max = n - 1;


    // TODO: implement a searching algorithm
    do
    {
        int mid = (min + max) / 2;


        if(value == values[mid])
        {
            return true;
        }
        else if(value < values[mid])
        {
            max = (mid - 1);
        }
        else if(value > values[mid])
        {
            min = (mid + 1);
        }
    }
    while(min <= max);
    return false;
}


void sort(int values[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (n - 1); j++)
        {
            if(values[j + 1] < values[j])
            {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }
}