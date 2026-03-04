#include<stdio.h>

int main(void)
{
    FILE *fp = NULL;
    //file opening in read mode
    fp = fopen("ravil.txt", "r");
    if(fp == NULL)
        perror("Error opening File");
    else
    {
        int ch_code = 0;

        /*if want to read only single character

            ch_code = fgetc(fp);
            printf("%d : %c", ch_code, ch_code);

        */
        while((ch_code = fgetc(fp)) != EOF) //EOF = End Of File (-1)
        { 
            printf("%c", ch_code);
            // position in file is incremented by 1 on every fgetc call
        }
    }

return 0;
}