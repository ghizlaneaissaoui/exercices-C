#include <stdio.h>
//  Ecrire un programme C qui définit un nombre magique (un nombre secret), et lit des entiers à l’entrée jusqu’à ce que l’utilisateur trouve ce nombre. En lui indiquant à chaque fois s’il est en dessus ou au-dessous du nombre magique.
int main()
{
    const nbsecret = 2006;
    int nombre, essais = 0;
    printf("Devinez le nombre magique");
    scanf("%d", &nombre);
    essais = 1;
    while (nombre != nbsecret)
    {
        essais++;
        if (nombre < nbsecret)
        {
            printf("Mauvais nombre, %d est inferieur au nombre secret", nombre);
            scanf("%d", &nombre);
        }
        else if (nombre > nbsecret)
        {
            printf("Mauvais nombre, %d est superieur au nombre secret", nombre);
            scanf("%d", &nombre);
        }
    }

    printf("Bravo ! Vous avez trouve le nombre secret %d en %d essais", nbsecret, essais);
}