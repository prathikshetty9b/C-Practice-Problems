#include "header.h"
#include <math.h>
#include <stdio.h>

/*--------------------------------------Day 3----------------------------------*/

// 1. WAP to convert a binary number to decimal and vice versa.

// Binary to Decimal

int binary_to_decimal(int binary_number)
{
    int rem = 0; //to store binary bits
    int decimal_number = 0;
    int base = 1;
    if(binary_number >= 0) //Only Positive Numbers
    {
        while(binary_number > 0)
        {
            rem = binary_number % 10;
            if (rem > 1) // Binary bits can hold only 1 or 0
                return -1;
            decimal_number = decimal_number + rem * base;
            base = base * 2;
            binary_number = binary_number / 10; // Remove last bit
        }
        return decimal_number;
    }
    else
    {
        return -1;
    }
}

// Decimal to Binary

int decimal_to_binary(int decimal_number)
{
    int base = 2;
    int binary_number = 0;

    if(decimal_number >= 0) // positive numbers only
    {
        while(decimal_number > 0)
        {
            binary_number = binary_number * 10 + decimal_number % base;
            decimal_number = decimal_number / 2; //Decimal Number for next iteration
        }
        return binary_number;
    }
    else
    {
        return -1;
    }

}

// 2. Generate a sequence of numbers such that every number in the sequence is the sum of
//    the previous three numbers. The first three numbers are 0,0,1

int generate_sum_of_previous_three_numbers(int sequence_length)
{
    int first = 0, second = 0, third = 1;
    int next = 0;
    printf("\n\tSequence Length : %d\n\tSequence :", sequence_length);
    //Corner cases
    if (sequence_length == 1)
    {
        printf(" 0\n");
        return 1;
    }

    else if(sequence_length == 2)
    {
        printf(" 0 0\n");
        return 1;
    }

    else if(sequence_length == 3)
    {
         printf(" 0 0 1\n");
         return 1;
    }

    // sequence length greater than 3
    else if(sequence_length > 3)
    {
        printf(" 0 0 1");
        for( int i = sequence_length; i > 3 ; i--)
        {
            next = first + second + third  ;
            printf(" %d", next);
            first = second;
            second = third;
            third = next;
        }
        printf("\n");
        return 1;
    }
    else
    {
        printf(" Invalid \n");
        return -1;
    }

}

// 3. WAP to print the following sketch by taking in N as number of rows

/*      * * * *
          * * *
            * *
              *
*/

int generate_pattern(int rows)
{
    int spaces = 0;
    if( rows > 0)
    {
        for(int i=rows ; i > 0; i--)
        {
            printf("\t");
            spaces = rows - i; // spaces to be added
            for(int j=i; j > 0; j--)
            {
                while( spaces != 0 ) // Add spaces
                {
                    printf("  ");
                    spaces--;
                }
                printf(" *");
            }
            printf("\n");
        }
        return 1;
    }
    else
    {
        return -1;
    }
}

// 4. Write a C program, which will print two digit numbers whose sum of both digit is
//    multiple of seven. e.g. 16,25,34......

int two_digit_multiple_of_seven()
{
    int digit_1, digit_2, sum = 0;
    int number = 10; // First two digit number
    printf("\t Numbers :");
    for(int i = number ; i < 100 ; i++ )
    {
        digit_1 = i % 10; // Units place
        digit_2 = i / 10; // Tens Place
        sum = digit_1 + digit_2 ;
        if(sum % 7 == 0)
            printf(" %d",i);
    }
    printf("\n");
    return 1;
}

// 5. Write a recursive function for calculating power of a number. Take base number and exponent from user.

int power_using_recursion(int base,int exponent)
{
    if(base >= 0 && exponent >= 0 )
    {
        // Base Case
        if(exponent == 0)
        {
            return 1;
        }
        // Recursive Statement
        else
        {
            return base * power_using_recursion(base,exponent-1);

        }
    }
    else
    {
        return -1; // Return -1 for invalid inputs
    }
}

// 6. Write a recursive function for calculating factorial of a number.

int factorial_of_number_using_recursion(int number)
{
    if(number >= 0 )
    {
        // Base Case
        if(number == 0)
        {
            return 1;
        }
        // Recursive Statement
        else
        {
            return number * factorial_of_number_using_recursion(number - 1);

        }
    }
    else
    {
        return -1; // Return -1 for invalid inputs
    }
}


