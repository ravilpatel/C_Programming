#include<stdio.h>

int main(void)
{
     int i, arr[5]= {25,30,35,40,45}, *p;
     p = arr; //Correction. Defining p with address of arr[0]
     for(i = 0; i<5;i++)
     {
        // printf("%d ", *arr);
        // arr++;          ***ERROR: Array acts as a pointer but can't be updated in this manner
        
        //correction includes giving p = arr and then incrementing p++ which is legal.
        printf("%d ", *p); // instead derefercing arr, we are dereferencing p
        p++;

        /* 
            Alternative includes = *(arr+i) instead of direct operation as arr++ 
        */
     }

     return 0;
}