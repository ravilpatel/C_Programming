#include<stdio.h>

int main(void)
{
    int arr[3][4];
    printf("%p\t", arr); //address of arr[0][0]
    printf("%p\t", arr[0]); //address of arr[0][0]
    printf("%p\n", &arr[0][0]); //address of arr[0][0]
    printf("%u\t", sizeof(arr)); //3*4* 4 bytes = 48 bytes
    printf("%u\t", sizeof(arr[0])); //4*4bytes = 16 bytes
    printf("%u\t", sizeof(arr[0][0])); //4 bytes
return 0;
}   