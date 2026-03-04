#include<stdio.h>

int main(void)
{
    char name[25];
    int age;
    float weight;
    
    FILE *fp = NULL;
    fp = fopen("f_scanf.txt", "r");
    /*
    f_scanf.txt has below content:
                                     
        20 65.5 Ravil Patel   
        20 75.2 Antriksh Patel
        
    */
    if(fp == NULL)
        perror("Error opening file");
    else
    {
        printf("Total scaned variables: %d\n\n",(fscanf(fp, "%d %f %[^\n]", &age, &weight, name)));
        printf("Name: %s\nAge: %d\nWeight: %.2f\n\n",name,age,weight);
        
        //fscanf returns total number of variables scaned. so here it will return 3


        printf("Total scaned variables: %d\n\n", (fscanf(fp, "%d %f %[^\n]", &age, &weight, name)));
        printf("Name: %s\nAge: %d\nWeight: %.2f\n\n",name,age,weight);
    }
return 0;
}