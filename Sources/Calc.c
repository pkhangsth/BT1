#include <stdio.h>
#include "..\Headers\input_arr.h"
#include "..\Headers\Calc.h"

int Sum(int array[],int length_arr)
{
    int n=0;
    int i;
    for (i = 0; i < length_arr; i++)
    {
        n += array[i];
    }
return n;
}

int Max_number(int array[],int length_arr)
{
    int max = array[0];
    int i;
    for (i = 0; i < length_arr; i++)
    {
        if (max < array[i]) max = array[i];
        
    }
return max;
}

int Min_number(int array[],int length_arr)
{
    int min = array[0];
    int i;
    for (i = 0; i < length_arr; i++)
    {
        if (min > array[i]) min = array[i];
        
    }
return min;
}

int Find_position(int array[],int length_arr,int number)
{
    int possition[length_arr];
    int count = 0;
    int i;
    for (i = 0; i < length_arr; i++)
    {
        if (number == array[i]) printf("%d ",i);
        else count++;
    }
    if(count == length_arr) printf("Khong tim thay");
}