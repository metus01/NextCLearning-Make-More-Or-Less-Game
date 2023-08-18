#include <stdio.h>
#include <stdlib.h>
#define MAX 12
int main(void)
{
    FILE* file = NULL;
    file = fopen("test.txt", "r");
    int user_age = 0;
    int current_caracter = 0;
    char string [MAX] = "";
 
    if(file != NULL)
    {
        printf("Fichier ouvert");
        // fputc('A' , file);
        // fputs('Amen' , file);
        printf ("Entrez votre âge , sale utilisateur de merdeux\n");
        scanf("%d" , &user_age);
        fprintf(file , "The current user has %d years old" , user_age );
        fgets(string , MAX , file);
        printf("%s" , string);
        do
        {
            current_caracter = fgetc(file);
            printf("%c" , current_caracter);
        }while(current_caracter != EOF);
        fclose(file);
     
    }else

    {
        printf("access denied to file test.txt"); 
    }
    return 0;
    return
}