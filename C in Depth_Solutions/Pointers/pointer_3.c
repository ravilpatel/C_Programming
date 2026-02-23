#include<stdio.h>

int main(void)
{
    int arr[50], i;

    //Will print address of 1st 5 locations of arr[50] (each with difference of 4 bytes)
    for(i=0; i<5; i++)
        printf("%p ", arr+i); // %p returns back Pointer in Hex value and is of 8 bytes for 64-bit system


    //Enter 5 numbers to address of 1st 5 arr[50]
    printf("Enter 5 numbers: ");
    for(i = 0; i<5; i++)
        scanf("%d", arr+i);

    //De-referencing of 1st 5 location of arr
    for(i=0; i<5; i++)
        printf("%d ", *(arr+i));
    return 0;
}