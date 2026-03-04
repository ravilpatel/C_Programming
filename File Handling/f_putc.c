#include<stdio.h>

int main(void)
{
    char data[] = "Charotar University Of Science & Technology";

    FILE *fp = NULL;

    fp = fopen("ravil.txt", "w"); //will create ravil.txt or will rewrite in ravil.txt

    if(fp == NULL)
        perror("Error opening file");
    else{
        fputc('A', fp); //A will be sent to file
        fputc('\n', fp); //new line
        
        int i = 0;
        while(data[i] != '\0') // untill null character is recieved, loop continues
        {
            fputc(data[i], fp); // string will be sent to file
            i++;
        }
        // time complexity = O(n) for this while loop
        fclose(fp);
    }
return 0;
}