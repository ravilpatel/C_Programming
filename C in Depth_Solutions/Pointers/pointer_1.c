#include<stdio.h>

int main(void)
{
    int a = 5, *ptr;
    ptr = &a;
    printf("Input number: "); // assume input as 16
    scanf("%d", ptr); // ptr is already address of a, so a will be updated to 16
    printf("%d %d\n", a, *ptr);
}