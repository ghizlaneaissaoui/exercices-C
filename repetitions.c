#include <stdio.h>
// Consigne: Demander à l'utilisateur de saisir une série de nombres, puis afficher le nombre maximum et son nombre d'occurences.
int main()

{
    int Nnombre, entree, max, recu = 0, i = 1;

    do
    {
        printf("Combien de nombres voulez vous saisir ? ");
        scanf("%d", &Nnombre);
    } while (Nnombre < 1);

    for (i = 1; i <= Nnombre; i++)
    {
        printf("Saisissez le %d nombre", i);
        scanf("%d", &entree);

        if (i == 1)
        {
            max = entree;
            recu++;
        }
        if (entree == max && i != 1)
        {
            recu++;
        }
        if (entree > max)
        {
            max = entree;
            recu = 1;
        }

        printf("Le max est %d et est repete %d", max, recu);
    }
    return 0;
}
