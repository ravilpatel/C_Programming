#include<stdio.h>
void func(int a[10]);

int main(void)
{
    int arr[10];
    func(arr);
return 0;
}

void func(int a[10]) // a[10] here represents &a[0] or *a which ignores the size 10.
{
    int b[10], x=5;
    a=&x; // this change in local func() and will not be reflected to main()
    b=&x; // here b is array and size of 10 can not be ignored.
    // *b=&x could be correct as it points to address of b[0].
}