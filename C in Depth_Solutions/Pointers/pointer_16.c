#include<stdio.h>

int main(void)
{
    int arr[8] = {11,22,33,44,55,66,77,88};
    int *p, *q;
    q=arr/2; // no operations allowed on arr as it acts as a pointer but is not pure pointer.
    p=q*2; // again arithmetic operations apart from addition and subtraction is not possible.
    printf("%d %d", *p, *q);

return 0;
}