#include <stdio.h>
#include <assert.h>
#include "header.h"

int main()
{
    int * arr = store_integer_using_dynamic_allocation(10);

    for(int i = 0; i < 10 ; i++)
        printf("%d ", *(arr + i));

    return 0;
}
