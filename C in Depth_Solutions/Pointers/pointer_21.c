#include<stdio.h>

void func(int **pp);

int main(void)
{
    int *ptr;
    func(&ptr);
    printf("%d\n",*ptr); //Junk value or 10 depending on system if stack is erased or not
return 0;
}

void func(int **pp) //  { **pp = **(&ptr) == *ptr }
{
    int num=10;
    *pp=&num; // directly updates num to address of pp. BUT func will be deleted after some time
    // Hence, some junk value will be printed. 
}