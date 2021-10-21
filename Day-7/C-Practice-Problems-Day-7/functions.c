#include <stdio.h>
#include "header.h"
/*
DAY 7
1. WAP to store N integer values in an array (use malloc). Perform the following
operations:
i. Search an element using linear search
ii. Find maximum and minimum value
iii. Find the sum of all the elements of array
iv. Find the sum of even and odd elements of array
v. Check whether the array in palindrome
vi. Write a function to deallocate the memory using free()

*/

//1. WAP to store N integer values in an array (use malloc).
int * store_integer_using_dynamic_allocation(int n)
{
    int *arr;


    arr = (int *)malloc(n*sizeof(int));

    for(int i = 0; i < n ; i++)
    {
        *(arr + i) = i + 1;
        printf("%d ", *(arr + i));
    }
    return arr;
}
 //i. Search an element using linear search
int linear_search_using_dynamic_allocation(int *arr, int search_element, int array_size)
{
    for(int i = 0; i < array_size; i++)
    {
        if(search_element == *(arr + i))
            return i;
    }
    return -1;
}

