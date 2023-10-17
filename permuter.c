#include <stdio.h>
// Consigne : Ecrire un programme C qui permet de permuter le contenu de deux variables entières
int main()
{
    int a = 0, b = 0, c = 0;
    printf("Saisissez le premier nombre");
    scanf("%d", &a);
    c = a;
    printf("Saisissez le deuxieme nombre");
    scanf("%d", &b);
    a = b;
    b = c;

    printf("La valeur de a est %d et la valeur de b est %d", a, b);
}
