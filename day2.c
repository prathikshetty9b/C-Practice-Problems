#include "myheader.h"
#include <math.h>

/*--------------------------------------Day 2----------------------------------*/

// 1. Enter a 5 digit number and find the sum of its digits.
int sum_of_digits(int num)
{
    int sum = 0;
    if(num > 0) //This function only works for positive integers
    {
        while(num > 0)
        {
            sum = sum + (num % 10); //(num % 10) returns last digit of the number
            num = num / 10; // Remove last digit of the number
        }
        return sum;
    }
    else if(num == 0)
    {
        return 0;
    }
    else
    {
        return INVALID;
    }

}

// 2. Function to reverse the number.
int reverse_number(int num)
{
    if (num > 0) // This function only works for positive integers
    {
        int reverse_num = 0; // Variable to store reversed number.
        while(num > 0)
        {
            reverse_num = reverse_num * 10 + (num % 10);
            num = num / 10; //Remove the last digit
        }
        return reverse_num;
    }
    else if(num == 0)
    {
        return 0;
    }
    else
    {
        return INVALID;
    }
}

// 3. Function to find occurrences of digit in a number
int occurrence_of_number(int num, int digit) // Input the number and digit whose occurrence must be found.
{
   if (num > 0) // This function only works for positive integers
   {
      int count = 0;
      while (num > 0)
      {
          if (digit == (num%10))
          {
              count++; // Increase count by 1 if digit is found
          }
          num = num / 10; // Remove last digit for next iteration
      }
      return count;
   }
   else if (num == 0)
   {
       if( num == digit )
           return 1;
       else
           return 0;
   }
   else
   {
       return INVALID;
   }
}

// 4. Function to check if given number
int palindrome_number(int num) //return 1 if true, 0 if false.
{
    if (num >= 0)
    {
        if (num == reverse_number(num))
            return 1;
        else
            return 0;
    }
    else
    {
        return INVALID;
    }

}

// 5a Function to find if the number is prime or not
int is_prime(int n)
{
    if(n == 1)
    {
        return 0;
    }
    else
    {
        /*Iteration only goes up to sqrt(n) because out of the
        two factors at least one should be less than sqrt(n).*/
        for(int i=2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
// 5b Function to generate first N prime numbers
int generate_n_prime_numbers(int n)
{
    if(n > 0)
    {
        int count = 0;
        int num = 2;
        printf("\nGenerate %d Prime Numbers: ", n);
        while(count < n)
        {
            // Print the number if number is prime and increment the count
            if( is_prime(num))
            {
                printf("%d ",num );
                count ++;
            }
            num++;
        }
        return 1;
    }
    else
    {
        return -1;
    }
}
