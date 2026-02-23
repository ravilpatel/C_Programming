#include<stdio.h>

int main(void)
{
    int x, arr[8] = {11,22,33,44,55,66,77,88};

    x = (arr+2)[3]; 
    // this is equalivalent to new arr starting from 33 such as x[]= {33,44,55,66,77,88}
    //and to find x[3]=(arr+2)[3] i.e. 66

    printf("%d\n",x);//66
    return 0;
}