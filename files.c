#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE* file = NULL;
    file = fopen("test.txt", "w");
    if(file != NULL)
    {
        printf("Fichier ouvert");
        fputc('A' , file);
        fputs('Amen' , file);
        fclose(file);
       
    }else
    {
        printf("access denied to file test.txt");
    }
    return 0;
}