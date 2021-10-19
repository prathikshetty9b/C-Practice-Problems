# Manipal School of Information Sciences
## Fast Track C - 2021 - 22 | C Practice problems


#### Instructions

- All the functionalities should be implemented using functions.
- Test the functionality using assertions.
- Use proper names for variables and functions.
- Use comments to document the code.
- Format the code such that it is easily readable.
- Use gcc compiler (BIG NO to Turbo C)
- You are free to choose any editor. Recommended is codeblocks/ sublime/ Vi/ gedit/ Nano
- Create a GitHub account and upload all your practice problems under the folder C practice problems.
- Use MS Teams to discuss the issue with the faculty.

### Day 1 
  
1. Write a program that converts upper case to lower.
2. Write a program to calculate the area of circle.
3. Write a program to calculate simple and compound interest.
4. Write a program to convert temperature from Celsius to Fahrenheit and Fahrenheit to Celsius
5. Check if entered number is even or odd.
6. Check if entered year is leap year or not.
7. WAP to find power of 2^N using left shift operator.
  


### Day 2
  
  1. Enter a 5 digit number and find the sum of its digits. For E.g. if int number = 12345; 
then sum = 15;
2. Write a program to reverse the number. For E.g. If int number = 12345; then the 
output reverse = 54321;
3. Write a program to count the occurrences of digit in a number.
4. WAP to check if a given number is a palindrome. For e.g. 12321, 56788765;
5. Generate the first 'N' prime numbers. For Eg. If N=5 then 2,3,5,7,11
6. Write a C program to display and find the sum of the series 1+11+111+....111 up to n.
For eg. if n=4, the series is: 1+11+111+1111. Take the value of 'n' as input from the 
user
7. A number is called an Armstrong number if the sum of the cubes of the digits of the 
number is equal to the number. For example 153 = 1^3 + 5^3 + 3^3. Write a C 
program that asks the user to enter a number and returns if it is Armstrong or not.
8. Amicable numbers are found in pairs. A given pair of numbers is Amicable if the sum 
of the proper divisors (not including itself) of one number is equal to the other number 
and vice – versa. 
For example 220 & 284 are amicable numbers. First we find the proper divisors of   
220: 
220:1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110; 1+ 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284  
Now, 284: 1, 2, 4, 71, 142; 1 + 2 + 4 + 71 + 142 = 220  
  Write a C program to check that the input pair of numbers is amicable
9. Write a menu driven program to read two integers & find their sum, difference & 
product
10. Write a C program to calculate the volume of the following shapes: Cube, Cuboid, 
Sphere, Cylinder and Cone. Ask the user which one s/he wants to calculate, and take 
the appropriate required inputs. Then print the result. The input should be taken in the 
main function and calculations for every solid should be done in a separate function 
by passing appropriate arguments.  
Example: If the user chooses the option for cube, only one input is required i.e., the 
side. The volume is then calculated and printed. 
If the user chooses the option for cuboid, only three inputs are required i.e., length, 
breadth and height. The volume is then calculated and printed.
11. An Electricity board charges the following rates for use of electricity.  
For the First 200 units : Rs 1 per unit   
For the next 100 units : Rs 1.5 per unit   
Beyond 300 units : Rs 2 Per unit.   
Write a C Program to read no of unit consumed and print out total charge 
amount

  


### DAY 3

  
1. WAP to convert a binary number to decimal and vice versa.
2. Generate a sequence of numbers such that every number in the sequence is the sum of 
the previous three numbers. The first three numbers are 0,0,1.
3. WAP to print the following sketch by taking in N as number of rows
  ```
   * * * *
     * * *
       * *
         *
  ```
4. Write a C program, which will print two digit numbers whose sum of both digit is 
multiple of seven. e.g. 16,25,34......
5. Write a recursive function for calculating power of a number. Take base number and 
exponent from user.
6. Write a recursive function for calculating factorial of a number.
7. Use recursive calls to evaluate F(x) = x + x3/3! + x5/5! + x7/7!+ …
8. Concatenate two integer values using macros
9. Find square of a number using macros.
10. Write a menu driven program to display the mathematical functions like square root, 
natural log, log10x, power(x,n), Cos(x). (use math.h)


### DAY 4 - 5


1. WAP to sort the given array in ascending and descending order.
2. Write a program to swap two numbers using function.
3. WAP to find minimum and maximum elements in a given array using the function int 
find_max_min(int array[], int size, int *max, int *min);
4. Write a C program that take 2 integer sets A[] and b[] as input and prints results of 
following set operations:
I. A union B (Write function set_union())
II. A intersection B (Write function set_intersection())
III. A-B and B-A (Write function set_difference())
5. WAP to store 10 numbers in an array. Remove the duplicate entries in the array.
6. WAP to search for a given integer in an array using the linear search technique.
7. WAP to search for a given integer in an array using the binary search technique
8. Write a C program, that reads list of n integer and print sum of product of consecutive 
numbers. if n=7 and numbers are 4,5,2,5,6,4,7 then output is 
4*5+5*2+2*5+5*6+6*4+4*7 = 122.
9. WAP to read a string from the user and find the length of string.( Note: Do not use 
string.h header file)
10. Input date, month and year from the user, and using switch case, display in 
worded format. e.g. input: d=16, m=7, y=1992 
Output: 16th July, 1992
11. Write a function that will scan a character string passed as an argument and convert 
all lower-case characters into their upper-case equivalents.
12. Write a program to read a string from the user and reverse the string.( Note: Do not 
use string.h header file)
13. WAP to construct 5 * 5 matrix and display the contents. Use functions for 
construction and display of matrix.
14. WAP to add 2 matrixes.
15. WAP to check whether 2 matrixes are same.
16. WAP program to check if given matrix is a sparse matrix. If the number of zeros in a 
matrix exceeds (n*m)/2, where n, m is the dimension of the matrix, matrix is sparse 
matrix. Sparse matrix has more zero elements than nonzero elements.
## DAY 6


1. Write a program to store and print the roll no., name, age and marks of 10 students
using structures.
2. Write a program to add, subtract and multiply two complex numbers using structures.
3. Take the price and quantity of items as an input. Write a C function to calculate the 
sum of the prices. Write another C function to calculate the discount according to the 
following rules: 
For total less than Rs.1000, discount is 5%. 
For total greater than Rs.1000 but less than Rs.5000, discount is 10%.
For total greater than Rs.5000, discount is 15%. 
Write another function to print the individual item prices, total, discount and the final 
price.
Example:
If the prices are as follows: 
Item 1: 200  
Item 2: 400   
Item 3: 200   
Item 4: 10   
Item 5: 50
And the quantities are:   
Item 1: 1   
Item 2: 1   
Item 3: 3   
Item 4: 5   
Item 5: 2 
Then you should print:   
Item      Price Quantity Subtotal   
Item 1    200   1        200   
Item 2    400   1        400   
Item 3    200   3        600   
Item 4    10    5        50   
Item 5    50    2        100   
TOTAL 1350  
Discount 10% -135 
GRAND TOTAL 1215 
4. Implement two player snake and ladder game with board size 10x10. Use 6 ladder and 
7 snakes in the game. Use random function to roll the dice. After every move show 
the board to the user. Player who reaches 100 shall win the race. Note: Player1: user 
and Player2: computer.

### DAY 7

1. WAP to store N integer values in an array (use malloc). Perform the following 
operations:
i. Search an element using linear search  
ii. Find maximum and minimum value  
iii. Find the sum of all the elements of array  
iv. Find the sum of even and odd elements of array  
v. Check whether the array in palindrome  
vi. Write a function to deallocate the memory using free()  

### DAY 8

1. Write a program to store roll no., name, age and marks of N students dynamically.
Perform the following operations  
i. Search student by roll no.    
ii. Search student by name  
iii. Return student details who have scored highest marks. (Assume only one   
student has scored highest marks)
iv. Display the details of the students whose name begins with ‘A’.    
v. Deallocate all the memory before exiting the program   
2. In an X-Y Plane there are N numbers of points at location (x,y). Each point has a 
weight associated with it. Define the structure for the above problem. Find the point 
with maximum weight. Assuming all points are connected, count the number of 
vertical and horizontal lines. 

### DAY 9

1. Write a simple program to display the contents of a file. 
2. Write a program to copy the contents of one file to another. 
3. Write a program to count number of characters, spaces tabs and lines in a file. 
4. Read a file which contains one number per line. Check the number is odd or even and 
write to corresponding odd.txt or even.txt accordingly. Note: Numbers may not be 
single digit numbers. 
5. Write a program to create telephone directory. It should include Name, address and 
telephone number. It should have facilities for adding, deleting, editing and searching 
any number. Implement using text mode. 
6. Write a program to create telephone directory. It should include Name, address and 
telephone number. It should have facilities for adding, deleting, editing and searching 
any number. Implement using binary mode.
