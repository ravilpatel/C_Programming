#include<stdio.h>

int a=5,b=10;

void change1(int *p)
{p=&a;}

void change2(int **pp)
{*pp=&b;}

int main(void)
{
    int x=20,*ptr=&x;
    printf("%d ", *ptr); // 20
    change1(ptr); // this will invoke a local pointer p

    printf("%d ", *ptr); // 20 
    change2(&ptr); // here local pointer pp is not invoked instead *pp is called. Which will directly point to memory
    printf("%d ", *ptr); // 10
return 0;
}