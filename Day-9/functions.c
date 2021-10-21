#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "header.h"
//1. Write a simple program to display the contents of a file.

int display_contents_of_a_file(char * file_name)
{
    FILE *file;
    char c;

    file = fopen(file_name,"r");

    //error
    assert(file!= NULL);

    printf("\t");
    while(!feof(file))
    {
        c = fgetc(file);
        printf("%c",c);
        if(c =='\n')
            printf("\t");
    }
    printf("\n");
    fclose(file);
    return 1;
}

//2. Write a program to copy the contents of one file to another.
int copy_contents_of_a_file(char * current_file, char * destination_file)
{
    FILE *file1 ,*file2;
    char c;

    file1 = fopen(current_file,"r");
    file2 = fopen(destination_file,"w");
    //error
    assert(file1!= NULL || file2!= NULL);


    while(!feof(file1))
    {
        c = fgetc(file1);
        fputc(c,file2);
    }
    fclose(file1);
    fclose(file2);
    return 1;
}

//3. Write a program to count number of characters, spaces tabs and lines in a file.
int count_characters_in_file(char * file_name)
{
    FILE *file;
    int count = 0, tab = 0, space = 0, line = 0;
    char c;

    file = fopen(file_name,"r");
    //error
    assert(!file==NULL);


    while(!feof(file))
    {
        c = fgetc(file);
        //Increment Character Counter
        count++;
        //Increment Space counter
        if(c == ' ')
            space++;
        //Increment tab counter
        else if(c == '\t')
            tab++;
        //Increment line Counter
        else if(c == '\n')
            line++;

    }
    printf("\n\tCharacters    : %d",count);
    printf("\n\tSpaces        : %d",space);
    printf("\n\tTabs          : %d",tab);
    printf("\n\tLines         : %d",line);
    fclose(file);

    return 1;
}

//4. Read a file which contains one number per line. Check the number is odd or even and
//   write to corresponding odd.txt or even.txt accordingly.
int check_odd_or_even(char *file_name)
{
    FILE *file, *odd, *even;
    int number;

    file = fopen(file_name,"r");
    odd = fopen("odd.txt","w");
    even = fopen("even.txt","w");

    //Check for errors in file
    assert(file != NULL || odd != NULL || even != NULL);

    while(!feof(file))
    {
        fscanf(file,"%d",&number);
        if(number % 2 == 0)
            fprintf(even,"%d\n",number);
        else
            fprintf(odd,"%d\n",number);
    }
    fclose(file);
    fclose(odd);
    fclose(even);
    return 1;
}
