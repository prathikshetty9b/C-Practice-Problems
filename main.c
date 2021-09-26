#include<assert.h>
#include<stdio.h>
#include"myheader.h"

int main()
{
    int choice;
    int units_consumed = 0;
    /*--------------------------------------Day 1----------------------------------*/


    //1. Convert Upper case to Lower case.
    assert(lower_case('A') == 'a');
    assert(lower_case('b') == 'b');
    assert(lower_case(10) == INVALID);


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
    printf("\n\n 5. Generate the first 'N' prime numbers.");
    assert(generate_n_prime_numbers(5) == TRUE);
    assert(generate_n_prime_numbers(10) == TRUE);
    assert(generate_n_prime_numbers(0) == INVALID);
    assert (generate_n_prime_numbers(-50) == INVALID);

    //6. Write a C program to display and find the sum of the series 1+11+111+....111 up to n.
    //   Take the value of 'n' as input from the user*/
    printf("\n\n 6. Program to display and find the sum of the series 1+11+111+....111 up to n");
    sum_of_series();

    /*7.A number is called an Armstrong number if the sum of the cubes of the digits of the
        number is equal to the number. For example 153 = 1^3 + 5^3 + 3^3. Write a C
        program that asks the user to enter a number and returns if it is Armstrong or not*/
    printf("\n\n 7. Program that asks the user to enter a number and returns if it is Armstrong or not");
    is_armstrong();

    //8. Program to check that the input pair of numbers is amicable
    assert(is_amicable(220,284) == TRUE);
    assert(is_amicable(284,220) == TRUE);
    assert(is_amicable(50,600) == FALSE);
    assert(is_amicable(-10, 20) == INVALID);

    //9. Menu driven program to read two integers & find their sum, difference & product
    printf("\n\n 9. Menu driven program to read two integers & find their sum, difference & product ");
    calculator();

    //10.program to calculate the volume of the following shapes: Cube, Cuboid,
    //   Sphere, Cylinder and Cone. Ask the user which one s/he wants to calculate, and take
    //   the appropriate required inputs. Then print the result. The input should be taken in the
    //   main function and calculations for every solid should be done in a separate function
    //   by passing appropriate arguments.
    printf("\n\n 10. program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and Cone ");
    printf("\n Cube                      : 1 ");
    printf("\n Cuboid                    : 2 ");
    printf("\n Sphere                    : 3 ");
    printf("\n Cylinder                  : 4 ");
    printf("\n Cone                      : 5 ");
    printf("\n Enter your choice         : ");
    scanf("%d", &choice);
    volume_of_shapes(choice);

    //11.. An Electricity board charges the following rates for use of electricity.
    //For the First 200 units : Rs 1 per unit
    //For the next 100 units : Rs 1.5 per unit
    //Beyond 300 units : Rs 2 Per unit.
    //Write a C Program to read no of unit consumed and print out total charge
    //amount
    printf("\n\n 10. Program to read no of unit consumed and print out total charge amount ");
    printf("\n Units Consumed    : ");
    scanf("%d",&units_consumed);
    electricity_bill(units_consumed);

    return 0;


}
