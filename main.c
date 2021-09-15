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

    return 0;
}
