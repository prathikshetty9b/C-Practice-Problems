#include<assert.h>
#include<stdio.h>
#include"header.h"

/*--------------------------------------Day 4-5 ----------------------------------*/

int main()
{
    int arr[] = {7,1,2,9,9,1};
    int size = sizeof(arr)/sizeof(int);

    int max, min;

    // Variables for Problem 4
    int set_a[] = {1,5,9,7};
    int set_b[] = {4,2,5,7};
    int size_a = sizeof(set_a)/sizeof(int);
    int size_b = sizeof(set_b)/sizeof(int);

    //1. WAP to sort the given array in ascending and descending order.
    printf("\n\n 1. WAP to sort the given array in ascending and descending order.\n");



    printf("\n\tGiven Array      : ");
    assert(print_array(arr,size) == 1);

    assert(sort_array_ascending(arr,size) == 1);

    printf("\n\tAscending Order  : ");
    assert(print_array(arr,size) == 1);

    assert(sort_array_descending(arr,size) == 1);

    printf("\n\tDescending Order : ");
    assert(print_array(arr,size) == 1);



    //2. Write a program to swap two numbers using function.
    printf("\n\n 2. Write a program to swap two numbers using function.\n");
    printf("\n\tNote : Tested using Assertion.\n");

    int a = 10, b = 20;
    assert(swap_variables(&a,&b) == 1);
    assert(a == 20);
    assert(b == 10);

    //3. WAP to find minimum and maximum elements in a given array using the function int find_max_min(int array[], int size, int *max, int *min);
    printf("\n\n 3. WAP to find minimum and maximum elements in a given array using function \n");
    printf("\n\tNote : Tested using Assertion.\n");

    assert(find_max_min(arr,size,&max,&min) == 1);
    assert(max == 9);
    assert(min == 1);

    //4. Write a C program that take 2 integer sets A[] and b[] as input and prints results of  set operations:
    printf("\n\n 4. Write a C program that take 2 integer sets A[] and b[] as input and prints results of  set operations:\n");
    remove_duplicate_elements(arr,&size);
    print_array(arr,size);



    return 0;

}
