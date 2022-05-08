#include <stdio.h>
#include "..\Headers\m_string.h"


int isEqual(int array1[],int array2[],int length)
{
    int i, n=0;
    for (i = 0; i < length; i++)
    {
        if (array1[i] != array2[i])
        {
            n = 1;
        }
        
    }
return n;
}
