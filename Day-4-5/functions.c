#include "header.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*--------------------------------------Day 4-5 ----------------------------------*/

//1. WAP to sort the given array in ascending and descending order.

int sort_array(int arr[],int array_size, int option) //Sorts an array in ascending order if option = 0, Sorts in descending if option = 1
{
    switch(option)
    {
    case 0 ://Ascending Order
        for(int i = 0; i < array_size  ; i++)
        {
            for (int j=i+1; j < array_size ; j++)
            {
                if(arr[i] > arr[j])
                    swap_variables(&arr[i],&arr[j]);
            }
        }
        return 1;
    case 1 :
        for(int i = 0; i < array_size  ; i++)
        {
            for (int j=i+1; j < array_size ; j++)
            {
                if(arr[i] < arr[j])
                    swap_variables(&arr[i],&arr[j]);
            }
        }
        return 1;
    default:
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
        sort_array(array,size,0); //Sort in Ascending order
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

int remove_duplicate_elements(int arr[], int array_size)
{
    if(array_size != 0)
    {
        for(int i=0 ; i<array_size; i++)
        {
            for(int j = i+1; j<array_size; j++)
            {
                if(arr[i] == arr[j])
                {
                    for(int k=j; k<array_size; k++)
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
*/

//5. WAP to store 10 numbers in an array. Remove the duplicate entries in the array
int store_10_numbers_and_remove_duplicate()
{
    int size = 10;
    int arr[size];
    printf("\tEnter 10 Numbers into the array : \n");
    for(int i=0; i<size; i++)
    {
     printf("\t");
     scanf("%d", &arr[i]);
    }

    size = remove_duplicate_elements(arr,size);

    printf("\tArray after Removing Duplicate Elements is : ");
    for(int i=0; i<size; i++)
        printf(" %d", arr[i]);
}

int remove_duplicate_elements(int arr[], int array_size)
{

    sort_array(arr,array_size,0);

    int temp_array[array_size];
    int temp_size = 0;

    if(array_size == 0 || array_size == 1)
        return array_size;

    //Works only if the array is sorted
    for(int i = 0 ; i < array_size - 1; i++)
    {
        if(arr[i] != arr[i+1])
            temp_array[temp_size++] = arr[i];

    }
    temp_array[temp_size++] == arr[array_size - 1];
    for(int i = 0; i < temp_size ; i++)
    {
        arr[i] = temp_array[i];
    }
    return temp_size;
}

//6. WAP to search for a given integer in an array using the linear search technique.
int linear_search(int arr[], int size_of_array, int find) //Returns index of the first element that matches the search variable, else returns -1
{
    if(size_of_array > 0)
    {
        for(int i = 0; i < size_of_array ; i++)
        {
            if(arr[i] == find)
            {
                return i;
            }

        }
        return -1;
    }
    else
    {
        return -1;
    }

}


//7. WAP to search for a given integer in an array using the binary search technique
int binary_search_non_recursive(int arr[], int array_size, int search_element)//Function takes Sorted array.
{

    int low = 0;
    int high = array_size - 1;
    int mid;

    while(high >= low)
    {
        mid = (low + high)/2;
        if(arr[mid] == search_element)
        {
            return mid;
        }
        else
        {
            if(search_element > arr[mid])
                low = mid +1;
            else
                high = mid - 1;

        }
    }

    return -1;
}

//8. Write a C program, that reads list of n integer and print sum of product of consecutive
//   numbers. if n=7 and numbers are 4,5,2,5,6,4,7 then output is
//   4*5+5*2+2*5+5*6+6*4+4*7 = 122.
int sum_of_product_of_consecutive_numbers(int arr[], int array_size, int n)
{

    int sum = 0;

    //Move forward only if n is within array size
    if (n <= array_size && n > 1)
    {
        for(int i = 0; i < n-1; i++)
        {
            sum = sum + arr[i]*arr[i+1];
        }

        return sum;
    }
    //When there is only one element
    else if(n == 1)
        return arr[0];


    return -1;
}

//9. WAP to read a string from the user and find the length of string.( Note: Do not use string.h header file)
int string_length(char *str)//Returns length of the string
{
    int len = 0;
    for(int i=0; str[i] != '\0'; i++)
        len++;
    return len;

}

//10.Input date, month and year from the user, and using switch case, display in
//   worded format. e.g. input: d=16, m=7, y=1992
//   Output: 16th July, 1992
int date_in_worded_format(int day, int month, int year)
{
    //Day Corner Case
    if(day > 31 || day < 1)
        return -1;
    //Day
    printf("\tDate : ");
    switch(day)
    {
        //postfix "st"
        case 1:
        case 21:
        case 31:printf("%dst ",day);
                break;
        //postfix "nd"
        case 2:
        case 22:printf("%dnd ",day);
                break;
        //postfix "rd"
        case 3:
        case 23:printf("%drd ",day);
                break;
        //postfix "th"
        default:printf("%dth ",day);
                break;

    }
    //Month Corner Cases
    if(month > 12 || month < 1)
        return -1;
    //Month
    switch(month)
    {
        case 1: printf("January, ");break;
        case 2: printf("February, ");break;
        case 3: printf("March, ");break;
        case 4: printf("April, ");break;
        case 5: printf("May, ");break;
        case 6: printf("June, ");break;
        case 7: printf("July, ");break;
        case 8: printf("August, ");break;
        case 9: printf("September, ");break;
        case 10:printf("October, ");break;
        case 11:printf("November, ");break;
        case 12:printf("December, ");break;
    }
    //year corner case
    if(year < 0)
        return -1;
    //year
    printf("%d\n",year);
    return 1;
}

//11. Write a function that will scan a character string passed as an argument and convert
//    all lower-case characters into their upper-case equivalents.
int convert_string_case(char *str)
{
    for(int i = 0; str[i]!='\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
    }
    return 1;

}

//12. Write a program to read a string from the user and reverse the string.( Note: Do not use string.h header file)
int reverse_string(char *str)
{
    char temp;
    int len = string_length(str);
    for (int i = 0; i < len/2; i++)
    {
        // rev variable use to temporary hold the string
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len -i -1] = temp;
    }
  return 1;
}

//13. WAP to construct 5 * 5 matrix and display the contents. Use functions for construction and display of matrix.
int display_matrix(int *arr, int row, int col)
{
    printf("\t");
    for(int i = 0; i < row ; i++ )
    {
        for (int j = 0; j < col ; j++)
        {
            printf("%d\t", *((arr+i*col)+j));
        }
        printf("\n\t");
    }
    return 1;
}

//14. WAP to add 2 matrices.
int add_matrices(int *mat1, int *mat2, int row, int col)
{
    //Corner case
    if(row <= 0 || col <= 0)
        return -1;


    int sum[row][col];
    printf("\tMatrix 1\n");
    display_matrix((int *)mat1,row,col);
    printf("\n");
    printf("\tMatrix 2\n");
    display_matrix((int *)mat2,row,col);

    //Find Sum
    for(int i=0 ; i< row;  i++)
    {
        for(int j=0 ; j< col; j++)
        {
            sum[i][j] = *((mat1+i*col)+j) + *((mat2+i*col)+j);
        }
    }

    //Display Sum
    printf("\n\tSum\n");
    display_matrix((int *)sum,row,col);
    return 1;

}

//15. WAP to check whether 2 matrices are same.
int check_if_identical_matrix(int *mat1, int *mat2, int row, int col)//Returns 1 if matrices are identical, return 0 otherwise
{
    if(row <= 0 || col <= 0)
        return -1;
    for(int i=0 ; i< row;  i++)
    {
        for(int j=0 ; j< col; j++)
        {
             if(*((mat1+i*col)+j) != *((mat2+i*col)+j))
                return 0;
        }
    }
    return 1;

}

//16. WAP program to check if given matrix is a sparse matrix. If the number of zeros in a
//    matrix exceeds (n*m)/2, where n, m is the dimension of the matrix, matrix is sparse
//    matrix. Sparse matrix has more zero elements than nonzero elements.

int is_sparse_matrix(int *mat1, int row, int col) //Return 1 if matrix is sparse, Return 0 if not.
{
    //Corner case
    if(row <= 0 || col <= 0)
        return -1;

    int zero_count = 0;
    int mid = (row*col)/2;

     //Check if Matrix is sparse
    for(int i=0 ; i< row;  i++)
    {
        for(int j=0 ; j< col; j++)
        {
             if(*((mat1+i*col)+j)  == 0)
             {
                 zero_count++;
                 if(zero_count > mid)
                    return 1;
             }

        }
    }
    return 0;
}
