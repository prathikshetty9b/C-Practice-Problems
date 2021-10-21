#include <stdio.h>
#include <assert.h>
#include "header.h"

//1. Write a simple program to display the contents of a file.
void test_display_contents_of_a_file()
{
    printf("\n1. Write a simple program to display the contents of a file.\n");
    assert(display_contents_of_a_file("file.txt") == 1);
}

//2. Write a program to copy the contents of one file to another.
void test_copy_contents_of_a_file()
{
    assert(copy_contents_of_a_file("file.txt","destination.txt") == 1);
}

//3. Write a program to count number of characters, spaces tabs and lines in a file.
void test_count_characters_in_file()
{
    printf("\n3. Write a program to count number of characters, spaces tabs and lines in a file.\n");
    assert(count_characters_in_file("file.txt"));
}

//4. Read a file which contains one number per line. Check the number is odd or even and
//   write to corresponding odd.txt or even.txt accordingly.
void test_check_odd_or_even()
{
    assert(check_odd_or_even("numbers.txt")==1);
}

int main()
{
    test_display_contents_of_a_file();
    test_copy_contents_of_a_file();
    test_count_characters_in_file();
    test_check_odd_or_even();
}
