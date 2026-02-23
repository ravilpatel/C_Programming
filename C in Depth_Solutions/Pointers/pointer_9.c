#include<stdio.h>

int main(void)
{
    int i, arr[5]= {25,30,35,40,45}, *p=arr;

    //++*p = ++(*p) ie ++(25) and no increment of address.
    for(i=0; i<8; i++)
        printf("%d ", ++*p);
    printf("\n");

    //(*p)++ will do post increment of arr[0] which will 25+8 (cuz 8 times increment is done in upper loop)
    for(i=0; i<7; i++)
        printf("%d ", (*p)++);
    printf("\n");
}