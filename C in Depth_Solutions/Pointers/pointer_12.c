#include<stdio.h>

int main(void)
{
    int i, arr[10]= {25,30,35,40,55,60,65,70,85,90};
    int *p = arr+9;
    for (i = 0; i<10; i++)
    {
        printf("%d ",*p--); //90 85 70 65 ... 30 25
    }
    return 0;
}