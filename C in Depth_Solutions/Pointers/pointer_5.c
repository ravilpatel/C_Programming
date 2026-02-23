#include<stdio.h>

int main(void)
{
    int i, arr[5]= {25,30,35,40,45}, *p;
    p= &arr[4]; // arr returns address of arr[4]

    /*
        Remember arr[-0] = arr[last_element]
                 arr[-1] = arr[last_element - 1 ] and so on.
        *** Usefull for printing/reversing the array *** 
    */

    for(i=0; i<5; i++)
        printf("%d\t%d\t", *(p-i), p[-i]); // *(p-i) is dereferencing and p[-i] is array call.
    return 0;
}