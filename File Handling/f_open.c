#include<stdio.h>

int main(void)
{
    FILE *fp = NULL;
    fp = fopen("ravil.txt", "w");
    if (fp == NULL)
        printf("Error in opening File.");
    else{
        printf("File opened correctly.");
        fclose(fp);
        fp = NULL;
    }


return 0;
}