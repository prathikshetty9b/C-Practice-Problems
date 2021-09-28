#include<assert.h>
#include<stdio.h>
#include"header.h"

/*--------------------------------------Day 3----------------------------------*/

int main()
{
    //variables
    int base,exponent; // Q5.Power using recursion.

    //1. WAP to convert a binary number to decimal and vice versa.
    printf("\n\n 1. WAP to convert a binary number to decimal and vice versa.\n");
    printf("\n\tNote : Tested using Assertion.\n");

    // Binary to Decimal
    assert(binary_to_decimal(101) == 5);
    assert(binary_to_decimal(1111) == 15);
    assert(binary_to_decimal(123) == INVALID);
    assert(binary_to_decimal(-20) == INVALID);

    // Decimal to Binary
    assert(decimal_to_binary(5) == 101);
    assert(decimal_to_binary(15) == 1111);
    assert(decimal_to_binary(0) == 0);
    assert(decimal_to_binary(-52) == INVALID);

    //2. Generate a sequence of numbers such that every number in the sequence is the sum of
    //   the previous three numbers. The first three numbers are 0,0,1.

    printf("\n\n 2. Generate a sequence of numbers such that every number in the sequence is the\n    sum of the previous three numbers\n");
    assert(generate_sum_of_previous_three_numbers(9) == 1);
    assert(generate_sum_of_previous_three_numbers(3) == 1);
    assert(generate_sum_of_previous_three_numbers(0) == INVALID);

    //3. WAP to print the following sketch by taking in N as number of rows

    printf("\n\n 3. WAP to print the following sketch by taking in N as number of rows\n\n");
    assert(generate_pattern(7) == 1);
    assert(generate_pattern(-1) == INVALID);


    //4. Write a C program, which will print two digit numbers whose sum of both digit is
    //   multiple of seven. e.g. 16,25,34......

    printf("\n\n 4. Write a C program, which will print two digit numbers whose sum of both digit \n    is multiple of seven. e.g. 16,25,34......\n");
    assert(two_digit_multiple_of_seven() == 1);

    //5. Write a recursive function for calculating power of a number. Take base number and exponent from user.


    printf("\n\tEnter Base Number                        : ");
    scanf("%d", &base);
    printf("\n\tEnter Exponent                           : ");
    scanf("%d", &exponent);
    printf("\n\tPower                                    : %d", power_using_recursion(base,exponent));


    //6. Write a recursive function for calculating factorial of a number.
    printf("\n\n 6. Write a recursive function for calculating factorial of a number.\n");
    printf("\n\tNote : Tested using Assertion.\n");
    assert(factorial_of_number_using_recursion(5) == 120);
    assert(factorial_of_number_using_recursion(1) == 1);
    assert(factorial_of_number_using_recursion(0) == 1);
    assert(factorial_of_number_using_recursion(-10) == INVALID);



    return 0;
}
