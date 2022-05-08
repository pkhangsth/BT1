#include <stdio.h>
#include "..\Headers\input_arr.h"

int input_array(int array[],int lenght_arr)
{
    int i;
    for (i = 0; i < lenght_arr; i++) scanf("%d",&array[i]);
}
int show_array(int array[],int lenght_arr)
{
    int i;
    for (i = 0; i < lenght_arr; i++) printf("%d ",array[i]);
    printf("\n");
}