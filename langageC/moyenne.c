/*Entête, lieu d'importation des bibliothèques nécessaires au bon fonctionnement de notre programme*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>



/*Déclaration Constante*/

#define max 100

/*VDéclaration ariables globale*/

int i= 0, j = 0, n = 0, numero = 1;

/*Corp du programme*/

int main()
{

/*Déclrations Variables locales*/

    double mat[max][max];
    double devoir, examen, moyenne, note = 0, cc, exam;
    char iduser[80]= {0};
    char matiere[80]={0};
    

/*Saisie par l'utilisateur : nom et nbr de matières*/

    printf("Votre Nom:? \n");
    scanf("%[^\n]s", iduser);
    printf("\n");
    printf("Vos nombres de matières: \n");
    scanf("%d", &n);
    printf("\n");

/* Remplissage  note devoir et examen pour chaque matière par l'utilisateur*/ 
            while ((i < n) && (j < 2))
            {
               for ( i = 0; i < n; i++)
                {
/*saisie, lecture et controle devoir*/
                    printf("L'intitulé de la matière %d:", numero++); scanf("%s", matiere);
                    printf("\n");
                    printf("Note Devoir  de %s :", matiere);
                    printf("\n");
                    scanf("%lf", &devoir);
                    if ((devoir < 0) || (devoir > 20))
                    {
                            printf("La note de devoir doit être compris entre à 0 et 20 :\n");
                            scanf("%lf", &devoir);
                    }
                    printf("\n");
/*saisie, lecture et controle examen*/
                    printf("Note examen  de %s :", matiere);
                    printf("\n");
                    scanf("%lf", &examen);
                    if ((examen < 0) || (examen > 20))
                    {
                            printf("La note de devoir doit être compris entre à 0 et 20 :\n");
                            scanf("%lf", &examen);
                    }
                }
                i++;
                j++;
            }
            
    
/*Calcul moyenne selon le système LMD*/

/**************************************************************************
Coefficient devoir = 30% soit 0.3
Coefficient examen = 70% soit 0.7

****************************************************************************/

 /*
 pour obtenir la moyenne sur avec ce système
il faut multiplier la note devoir par 30%,
et la note d'examen par 70%
puis cumuler les deux notes le tout diviser par n
*/

                for ( i = 0; i < n; i++)
                {
                    for ( j = 0; j < 2; j++)
                    {
                        while ((i < n) && (j < n))
                        {
                            cc = devoir * 0.3;       /* dans controle continu (cc), devoir est mutilplié par 30%*/
                            exam = examen * 0.7;     /* dans (exam), examen est mutilplié par 70% */
                            note = note + cc + exam; /*on fait la somme de devoir et exam*/
                            moyenne = note / n; 
                            i++;
                            j++;
                        
                        }   
                    }
                
                }
/*Affichage moyenne et duction sur la mension*/

        if (moyenne < 10)
        {
            printf("%s votre moyenne est %lf :", iduser,  moyenne );
            printf("\n");
            printf("Mension médiocre !");
            printf("\n");
        }
        else if (moyenne >= 10 && moyenne < 12)
        {
            printf(" %s votre moyenne est %lf :", iduser,  moyenne );
            printf("\n");
            printf("Mension passable !");
            printf("\n");
        }
        else if (moyenne > 12 && moyenne <= 14)
        {
            printf(" %s votre moyenne est %lf :", iduser,  moyenne );
            printf("\n");
            printf("Mension assez bien !");
            printf("\n");
        }
        else if (moyenne > 14 && moyenne <= 16)
        {
            printf(" %s votre moyenne est %lf :", iduser,  moyenne );
            printf("\n");
            printf("Mension bien !");
            printf("\n");
        }
        else
        {
            printf(" %s votre moyenne est %lf :", iduser,  moyenne );
            printf("\n");
            printf("Mension exellente !");
            printf("\n");
            printf("\n");
    }
exit;

}
    