#include <stdio.h>
#include "..\Headers\Convernt.h"
int Bin(int Dec)
{
    int bin[10];
    int i;
    for (i = 0; Dec >0 ; i++)
    {
        bin[i] = Dec%2;
        Dec = Dec/2;
    }
    for (i = i-1; i >= 0; i--)
    {
        printf("%d",bin[i]);
    }
}

int Hex(int Dec)
{
    if (Dec < 16)  
    {
        printf("%c","0123456789ABCDEF"[Dec]);
        return;
    } 
    else Hex(Dec / 16);
    printf("%c","0123456789ABCDEF"[Dec % 16]);
}