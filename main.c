#include<assert.h>
#include<stdio.h>
#include"myheader.h"

int main()
{
    /*--------------------------------------Day 1----------------------------------*/


    //1. Convert Upper case to Lower case.
    assert(lower_case('A') == 'a');
    assert(lower_case('b') == 'b');
    assert(lower_case(10) == INVALID);
/*

    //2. Calculate the area of circle.
    float radius;
    printf("Enter the Radius of the Circle : \n");
    scanf("%f", &radius);
    printf("Area of the Circle: %d \n",circle_area(radius));


    // 3. Simple Interest & Compound Interest
    float p,t,r;
    printf("Enter Principal Amount : \n");
    scanf("%f", &p);
    printf("Enter Time Period in Years : \n");
    scanf("%f", &t);
    printf("Enter Rate of Interest : \n");
    scanf("%f", &r);
    printf("Simple Interest : %d \n",simple_interest(p,t,r));
    printf("Compound Interest : %d \n",compound_interest(p,t,r));

    // 4. Fahrenheit to Celsius and Celsius to Fahrenheit conversion.
    float fahrenheit, celsius;
    printf("Enter Temperature in Fahrenheit : \n");
    scanf("%f", &fahrenheit);
    printf("Celsius : %f \n",fahrenheit_to_celsius(fahrenheit));
    printf("Enter Temperature in Celsius : \n");
    scanf("%f", &celsius);
    printf("Fahrenheit : %f\n",celsius_to_fahrenheit(celsius));
*/
    //5. To check whether the given number is odd or even
    assert(odd_or_even(8) == EVEN);
    assert(odd_or_even(13) == ODD);

    //6. To check whether the given number is leap year or not.
    assert(is_leap_year(2021) == NOT_LEAP_YEAR);
    assert(is_leap_year(2020) == LEAP_YEAR);
    assert(is_leap_year(2000) == LEAP_YEAR);
    assert(is_leap_year(1900) == NOT_LEAP_YEAR);
    assert(is_leap_year(-1000) == INVALID);

    //7. Find power of 2^N using left shift operator.
    assert(power_of_2(2) == 4);
    assert(power_of_2(4) == 16);
    assert(power_of_2(10) == 1024);
    assert(power_of_2(-1) == INVALID); //returns INVALID if number is negative


    /*--------------------------------------Day 2----------------------------------*/

    //1. Enter a 5 digit number and find the sum of its digits.
    assert(sum_of_digits(12345) == 15);
    assert(sum_of_digits(0) == 0);
    assert(sum_of_digits(30) == 3);
    assert(sum_of_digits(-1) == INVALID);

    //2. Write a program to reverse the number.
    assert(reverse_number(12345) == 54321);
    assert(reverse_number(0) == 0);
    assert(reverse_number(5409) == 9045);
    assert(reverse_number(-50) == INVALID);

    //3. Write a program to count the occurrences of digit in a number
    assert(occurrence_of_number(11223,2) == 2);
    assert(occurrence_of_number(11100051,1) == 4);
    assert(occurrence_of_number(58,7) == 0);
    assert(occurrence_of_number(0,1) == 0);
    assert(occurrence_of_number(-32,7) == INVALID);

    //4. WAP to check if a given number is a palindrome
    assert(palindrome_number(12321) == TRUE);
    assert(palindrome_number(56788765) == TRUE);
    assert(palindrome_number(54689) == FALSE);
    assert(palindrome_number(56788) == FALSE);
    assert(palindrome_number(0) == TRUE);
    assert(palindrome_number(-502) == INVALID);

    //5. Generate the first 'N' prime numbers
    assert(generate_n_prime_numbers(5) == TRUE);
    assert(generate_n_prime_numbers(10) == TRUE);
    assert(generate_n_prime_numbers(0) == INVALID);
    assert (generate_n_prime_numbers(-50) == INVALID);


    return 0;
}
