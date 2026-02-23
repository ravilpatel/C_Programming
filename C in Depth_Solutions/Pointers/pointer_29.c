#include<stdio.h>

int main(void)
{
    int i, arr[3][4] = {{10,11,12,13},{20,21,22,23},{30,31,32,33}};
    int *pa[3];
    int (*p)[4];
    p=arr;
    for(i=0;i<3;i++)
        pa[i] = arr[i];
    printf("%d %d %d\n", pa[0][0],pa[0][1],pa[2][3]); //10 11 33
    printf("%d %d %d\n", p[0][0],p[0][1],p[2][3]);// 10 11 33
return 0;
}

/*
| Aspect             | `pa` (array of pointers)   | `p` (pointer to array) |
| ------------------ | -------------------------- | ---------------------- |
| Type               | `int *[3]`                 | `int (*)[4]`           |
| Memory             | Pointers stored separately | Single pointer         |
| Flexibility        | Rows can point anywhere    | Must be contiguous     |
| Pointer arithmetic | On `int`                   | On `int[4]`            |

*/