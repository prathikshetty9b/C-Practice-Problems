#include "myheader.h"
#include<math.h>

/*--------------------------------------Day 1----------------------------------*/

//1. Function that converts upper case to lower

char lower_case(char c)
{
    if(c >='A' && c <='Z') //Using ASCII value to determine if the character is in Upper Case
    {
        return c = c + 32;
    }
    else if (c >='a' && c <='z') //Checking if character is lower case
    {
        return c;
    }
    else
    {
        return INVALID; //Return INVALID if the character is not valid
    }

}



// 2. Function to calculate the area of circle

int circle_area(float radius) //r -> Radius of a Circle
{
    if(radius>0){
        return (int)PI*radius*radius; // Compute area only if radius is positive.
    }
    else
    {
        return INVALID;
    }

}



// 3. Functions to calculate simple and compound interest.

    // Function to find simple interest.
int simple_interest(float principal, float timePeriod, float rateofInterest)
{
    if(principal >= 0 && timePeriod >= 0 && rateofInterest >=0) //calculate only if numbers are positive
    {
        return (int)(principal*timePeriod*rateofInterest)/100; //Simple Interest = p*t*r/100
    }
    else
    {
        return INVALID;
    }
}

    // Function to find Compound Interest.
int compound_interest(float principal, float timePeriod, float rateofInterest)
{
    if(principal >= 0 && timePeriod >= 0 && rateofInterest >=0) //calculate only if numbers are positive
    {
        return (int)principal*pow(1+rateofInterest/100,timePeriod)-principal;   //Compound Interest = p(1+r)^t
    }
    else
    {
        return INVALID;
    }
}


// 4. Function to convert temperature from Celsius to Fahrenheit and Fahrenheit to Celsius

// Fahrenheit to Celsius Conversion
float fahrenheit_to_celsius(float f)
{
    float c;
    c = (f-32)*5/9;
    return c;
}

// Celsius to Fahrenheit Conversion
float celsius_to_fahrenheit(float c)
{
    float f;
    f = c*1.8 + 32;
    return f;
}


// 5. Check if entered number is even or odd.

int odd_or_even(int num) //return 2 if even, 1 if odd.
{
    if(num % 2 == 0)   //Checking if the number is even
    {
        return 2;
    }
    else
    {
       return 1;
    }
}


// 6. Check if entered year is leap year or not.

/* Leap year is a year which is perfectly divisible by 400,
   or year is perfectly divisible by 4 and is not divisible
   by 100 */
int is_leap_year(int year) // Return 4 if year is leap year else return 3
{
    if (year >= 0 )  // Check if entered year is Valid
    {
        /*If the first operand of a logical-OR operation has a nonzero value,
         the second operand is not evaluated.*/
        if( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) )
        {
            return 4;
        }
        else
        {
            return 3;
        }
    }
    else
    {
        return INVALID; // Return INVALID if year is negative.
    }
}

// 7. Find power of 2^N using left shift operator.
int power_of_2(int n)
{
    if (n >= 0)
    {
        return 1 << n;
    }
    else
    {
        return INVALID; // Return INVALID if number is negative.
    }
}

/*--------------------------------------Day 2----------------------------------*/
