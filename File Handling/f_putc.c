#include<stdio.h>

int main(void)
{
    FILE *fp = NULL;
    fp = fopen("ravil.txt", "a");
    if(fp == NULL)
        printf("Error opening file");
    else{
    fputc('A', fp);
    fputc('B', fp);
    fclose(fp);
    }
return 0;
}