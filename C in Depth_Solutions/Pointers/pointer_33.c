#include<stdio.h>

int main(void)
{
    int a[5]={1},b[5]={1};
    if(a==b) // Will not be same. a is address of a[0] and b is address of b[0]
        printf("Same\n");
    else    
        printf("Different");
return 0;
}