#include <stdio.h>
// Le centre de photocopie de votre établissement facture 0,25 DH pour les dix premières photocopies, 0,20 DH les dix suivantes et 0,10 DH  au-delà. Ecrire un programme qui  demande à l'utilisateur le nombre de photocopies effectuées et qui affiche la facture correspondant

int main()
{
    int nbpapiers;
    float prix = 0;
    printf("Saisir le nombre de papiers");
    scanf("%d", &nbpapiers);
    if (nbpapiers <= 10)
    {
        prix = nbpapiers * 0.25;
    }
    if ((nbpapiers > 10) && (nbpapiers < 20))
    {
        prix = 10 * 0.25;
        prix = prix + (nbpapiers % 10) * 0.20;
    }
    if (nbpapiers >= 20)
    {
        prix = (10 * 0.25) + (10 * 0.20);
        nbpapiers = nbpapiers - 20;
        prix = prix + (nbpapiers * 0.10);
    }
    printf("Le prix final est %.2f", prix);
}
