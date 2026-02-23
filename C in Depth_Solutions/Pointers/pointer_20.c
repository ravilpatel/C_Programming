#include<stdio.h>
void func(int x, int *y);

int main(void)
{
    int a= 2, b=6;
    func(a,&b);
    printf("a=%d, b=%d", a,b);// 2 2

return 0;
}

void func(int x, int* y)
{
    int temp;
    temp = x;
    x = *y; // x is local and will not be passed to main function.
    *y = temp; //*y being pointer will updated in main stack memory i.e. will reflect back in main
}