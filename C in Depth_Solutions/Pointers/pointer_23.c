#include<stdio.h>

void func1(int *ptr);
void func2(int **pptr);

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    printf("p = %p\t", p); // address of arr[0]
    func1(p);
    printf("p = %p\t", p);// address of arr[0]
    func2(&p);
    printf("p = %p\t", p);// address of arr[0] + 4 = arr[1]
return 0;
}

void func1(int *ptr)
{
    ptr++; //local update, no change in main()
}

void func2(int **pptr)
{
    (*pptr)++; // pointer update, change in main()
}