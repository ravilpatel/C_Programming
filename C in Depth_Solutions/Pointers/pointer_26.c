#include<stdio.h>

int main(void)
{
    int arr[3][4][5];
    printf("%p\t", arr); //address of arr[0][0][0]
    printf("%p\t", arr[0]); //address of arr[0][0][0]
    printf("%p\t", &arr[0][0]); //address of arr[0][0][0]
    printf("%p\n", &arr[0][0][0]); //address of arr[0][0][0]
    printf("%u\t", sizeof(arr)); //3*4*5* 4 bytes = 240 bytes
    printf("%u\t", sizeof(arr[0])); //4*5*4bytes = 80 bytes
    printf("%u\t", sizeof(arr[0][0])); //5*4=20 bytes
    printf("%u\t", sizeof(arr[0][0][0])); //4 bytes
return 0;
}   