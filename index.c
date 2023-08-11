#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//directives de préprocesseurs
int main(int argc ,  char *argv[])
{
 
    int nb_myst = 0;
    int nb_enter =0;
    const int  MIN = 10;
    const int  MAX = 16;
    int enter_joueur1 = 0;
    int enter_joueur2= 0;
    int nb_coup = 0;
    int nb_coup_player1 = 0;
    int nb_coup_player2 = 0;
    srand(time(NULL));
    nb_myst = (rand() % (MAX-MIN + 1)) + MIN;
    int mode = 0;
    printf("Welcome ,  veuillez choisir le mode de qui vous convient .\n Entrez 1 pour le mode en solo et 2 pour le mode 2 joueurs ");
    scanf("%d" , &mode);
    switch(mode)
    {
          case 1:
         do 
        {
        printf("Enrez un nombre  entre 10 et 16  \n");
        scanf("%d" , &nb_enter);
        if(nb_enter < nb_myst)
        {
            printf("Le nombre mystère est plus grand\n");
            nb_coup++;
        }
        else if(nb_enter > nb_myst)
        {
            printf("Le nombre mystère est plus petit\n");
            nb_coup++;
        }else
        {
             printf("Heu , le nombre mystère  c\'etait  %d \n " , nb_myst);
            printf ("Vous avez réussi en  %d coup \n" , nb_coup+1);
            break;
        }
        }while(nb_enter != nb_myst);
        break;
        case 2 :
        do
        {
        printf("Joueur 1 , entrez un nombre \n");
        scanf("%d", &enter_joueur1);
        printf("Joueur2 , entrez le nombre que vous avez dévinez\n");
        scanf("%d" , &enter_joueur2);
        if(enter_joueur1 < enter_joueur2)
        {
            printf("Joueur 2 , le nombre mysère est plus grand\n ");
            nb_coup_player1++;
        }
        else  if(enter_joueur1 > enter_joueur2)
        {
            printf("Joueur2 ,  le nombre mystère est plus petit \n");
            nb_coup_player2++;
        }
        else
        {
            printf("Le nombre mystère est : %d" , enter_joueur1);
            printf("Echec et Mat en %d coup pour le joueur 1 et %d pour le joueur 2" , nb_coup_player1+1 , nb_coup_player2+1 );
        }
    }while(enter_joueur1 != enter_joueur2);

    break;

    default:

    printf ("Veuillez entrez une option valide \n");

    break;
    }

    return 0;
}