#include "header.h"
#include <math.h>
#include <stdio.h>

/*--------------------------------------Day 4-5 ----------------------------------*/

//1. WAP to sort the given array in ascending and descending order.

//Ascending Order
int sort_array_ascending(int arr[],int array_size)
{
    if (array_size != 0)
    {

       for (int i = 0; i < array_size - 1; i++)
        {
            // Compare element with every other element
            for(int j = i+ 1; j < array_size; j++ )
            {
                //swap if element is smaller than minimum element
                if(arr[i] > arr[j])
                    swap_variables(&arr[i],&arr[j]);
            }
        }
        return 1;
    }
    else
    {
        return -1;
    }


}

//Descending Order
int sort_array_descending(int arr[],int array_size)
{
    if (array_size != 0)
    {

       for (int i = 0; i < array_size - 1; i++)
        {
            // Compare element with every other element
            for(int j = i+ 1; j < array_size; j++ )
            {
                //swap if element is smaller than minimum element
                if(arr[i] < arr[j])
                    swap_variables(&arr[i],&arr[j]);
            }
        }
        return 1;
    }
    else
    {
        return -1;
    }


}

//Print Array
int print_array(int arr[], int array_size)
{
    if (array_size != 0)
    {
       for (int i = 0; i < array_size; i++)
        {
            printf("%d ",arr[i]);

        }
        return 1;
    }
    else
    {
        return -1;
    }
}



//2. Write a program to swap two numbers using function.
int swap_variables(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 1;
}

//3. WAP to find minimum and maximum elements in a given array using the function int find_max_min(int array[], int size, int *max, int *min);
int find_max_min(int array[], int size, int *max, int *min)
{
    if (size != 0)
    {
        sort_array_ascending(array,size);
        *min = array[0]; // First element in the array is the smallest
        *max = array[size -1]; //last element in the array is the largest
        return 1;
    }
    else
    {
        return -1;
    }
}

//4. Write a C program that take 2 integer sets A[] and b[] as input and prints results of  following set operations:

// I. A Union B
/*int set_union(int set_a[], int set_b[], int size_a, int size_b)
{
    int array_union[],size_union = 0;
    if(size_a == 0 && size_b == 0)
    {
        //Copy Array 1 to Union_Set
        for(int i=0; i<size_a; i++)
        {
            array_union[size_union] ==  set_a[i];
            size_union++;
        }
        //Copy Array 2 to Union Set
        for(int j=0; j<size_b; j++)
        {
            array_union[size_union] ==  set_a[j];
            size_union++;
        }
        //Remove Duplicate Elements
        remove_duplicate_elements(array_union,&size_union);

        //print
        print_array(array_union,size_union)

    }
}
*/
int remove_duplicate_elements(int arr[], int *array_size)
{
    if(*array_size != 0)
    {
        for(int i=0 ; i<*array_size; i++)
        {
            for(int j = i+1; j<*array_size; j++)
            {
                if(arr[i] == arr[j])
                {
                    for(int k=j; k<*array_size; k++)
                    {
                        arr[k] == arr[k+1];
                    }
                    *array_size--;
                }
            }
        }
        return 1;
    }
    else
    {
        return -1;
    }
}
