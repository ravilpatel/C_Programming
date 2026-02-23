#include<stdio.h>

int main(void)
{
    int arr[6] = {1,2,3,4,5,6};
    int *p=arr;
    printf("size of p=%u, Size of arr=%u\n", sizeof(p),sizeof(arr)); // 4 bytes, 24 bytes 
return 0;
}