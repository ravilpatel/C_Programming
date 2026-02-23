#include<stdio.h>

int main(void)
{
    int i, arr[5]= {25,30,35,40,45}, *p;
    p=arr; // arr returns address of arr[0]
    for(i=0; i<5; i++)
        printf("%d\t%d\t", *(p+i), p[i]); // *(p+i) is dereferencing and p[i] is array call.
    return 0;
}