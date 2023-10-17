#include <stdio.h>
// Consigne : Programme qui permet d'inverser un nombre entier: � 3chiffres
int main()
{
int nb,inverse=0;
printf ("Saisir un nombre a 3 chiffres a inverser");
scanf ("%d", &nb);
 while (nb != 0)
 {
 	inverse = inverse * 10;
 	inverse = inverse + nb%10;
 	nb= nb/10;
 }
 printf("L'inverse de votre nombre est %d",inverse);
return 0;
}
