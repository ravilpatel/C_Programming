#include<stdio.h>

int main(void)
{
    float a=5,*p,**pp;
    p=&a;
    pp=&p;
    printf("a=%f,p=%p, pp=%p\n", a,p,pp);//5.00, address of a, address of p

    a=a+1; //6
    p=p+1;
    pp=pp+1;
    printf("a=%f,p=%p, pp=%p\n", a,p,pp);//6.00, address of a +4, address of p +4
    
return 0;
}