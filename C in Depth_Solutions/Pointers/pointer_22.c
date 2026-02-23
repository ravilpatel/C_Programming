#include<stdio.h>

void func(int x, int y);

int main(void)
{
    int a=5,b=8;
    func(a,b);
    printf("a=%d, b=%d\n",a,b);//5,8

return 0;
}

void func(int x, int y)
{
    int temp;
    temp = *(&x), *(&x) = *(&y), *(&y)=temp; // all of this will stay in this func only, and will not be global
    //COncept of local and global comes into play.
}