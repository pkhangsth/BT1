#include <stdio.h>
#include "..\Headers\input_arr.h"
#include "..\Headers\Calc.h"
#include "..\Headers\Convernt.h"
#include "..\Headers\m_string.h"

int main(int argc, char const *argv[])
{
    /*BAI 1*/
    int length;
    int sum;
    int max;
    int min;
    int possition;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&length);
    int array[length];
    printf("Nhap phan tu:\n");
    input_array(array,length);
    printf("Mang vua nhap la: ");
    show_array(array,length);
    sum = Sum(array,length);
    printf("tong la: %d \n",sum);
    max = Max_number(array,length);
    printf("So lon nhat la: %d \n",max);
    min = Min_number(array,length);
    printf("So nho nhat la: %d \n",min);
    printf("Nhap so can tim: ");
    scanf("%d",&possition);
    printf("Vi tri la: ");
    Find_position(array,length,possition);
    printf("\n");
    /*BAI 2*/
    int Dec;
    printf("Nhap so can chuyen doi: ");
    scanf("%d",&Dec);
    printf("He nhi phan la: 0b");
    Bin(Dec);
    printf("\n");
    printf("He Hexa la: 0x");
    Hex(Dec);
    printf("\n");
    /*BAI 3*/
    printf("Nhap so phan tu cua 2 mang: ");
    scanf("%d",&length);
    int array1[length];
    int array2[length];
    printf("Nhap phan tu mang chinh:\n");
    input_array(array1,length);
    printf("Nhap phan tu mang so sanh:\n");
    input_array(array2,length);
    int equal = isEqual(array1,array2,length);
    if (equal ==0) printf("Hai mang bang nhau");
    else printf("Hai mang khong bang nhau");
    return 0;
}

