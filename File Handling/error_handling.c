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
        while((ch_code = fgetc(fp)) != EOF)
        /*EOF comes in 2 cases:
            1. Actually End of File is reached
            2. Some error occurs while reading in some other position apart from end.
        */
        {
            printf("%c", ch_code);
        }

        //to determine if in actual End of File is reached, we can use feof
        if (feof(fp)) //feof returns integer 1 or 0
            printf("\nComplete File Read"); 
            //if you are just reading single or few characters, and End of FIle not reached then feof returns 0
        
        
        //to check if any error is there, we can use ferror
        /*
            error can occur due to some unknown reason 
            or because of mode of file operation.
            if mode = 'w', and if you do fgetc then ferror flag will be turned ON
        */
        if(ferror(fp))
            printf("Some error while reading file.");

        /*
            We are required to clear flags as it may harm our program in
            case more than 1 file operations are done.
        */
        clearerr(fp); // clears ferror and feof flags

        fclose(fp);
        
    }

return 0;
}