#define PI 3.14
#define INVALID -1
#define EVEN 2
#define ODD 3
#define LEAP_YEAR 4
#define NOT_LEAP_YEAR 3
#define TRUE 1
#define FALSE 0

/*--------------------------------------Day 1----------------------------------*/

// 1. Upper Case to Lower Case function definition
char lower_case(char c);

//2. Area of a circle function definition.
int circle_area(float r);

//3. Function definition for simple and compound interest.
int simple_interest(float principal, float timePeriod, float rateofInterest);
int compound_interest(float principal, float timePeriod, float rateofInterest);

//4. Fahrenheit to Celsius and Celsius to Fahrenheit
float fahrenheit_to_celsius(float f);
float celsius_to_fahrenheit(float c);

//5. Function definition for odd or even function
int odd_or_even(int num);

//6. Function definition for leap year function.
int is_leap_year(int year);

//7. Function definition for power of 2 using left shift operator
int power_of_2(int n);

/*--------------------------------------Day 2----------------------------------*/

// 1. Function definition for sum of digits function.
int sum_of_digits(int num);

// 2. Function definition for Reverse the Number function.
int reverse_number(int num);

// 3. Function definition for Occurrence of a Number
int occurrence_of_number(int num, int digit);

// 4. Function definition for palindrome function
int palindrome_number(int num);
// 5. Generate the first 'N' prime numbers.
int is_prime(int num);
int generate_n_prime_numbers(int n);
