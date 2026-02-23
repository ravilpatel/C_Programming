#include<stdio.h>

int main(void)
{
    int arr[4] = {10,20,30,40};
    int x = 100, *ptr=arr;
    printf("%p      %d      %d\n", ptr,*ptr,x);//address of arr, 10, 100
    
    x=*ptr++;
    printf("%p      %d      %d\n", ptr,*ptr,x);//address of arr[1], 20, 20

    x=*++ptr;
    printf("%p      %d      %d\n", ptr,*ptr,x);//address of arr[2], 30, 30

    x=++*ptr;
    printf("%p      %d      %d\n", ptr,*ptr,x);//address of arr[2], 31,31

    x=(*ptr)++;
    printf("%p      %d      %d\n", ptr,*ptr,x);//address of arr[2], 32, 31

    return 0;
}