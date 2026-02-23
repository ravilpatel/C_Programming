#include<stdio.h>

int main(void)
{
    int a[2][3];
    a[1][2] = 9;
    a[1][3] = 5;
    printf("%d\n", a[1,2]); //gives value = *(a+1)+3
    //printf("%d\n", *(a+1)+3); 
    //printf("%d", &a[1][2]);
    return 0;
return 0;
}