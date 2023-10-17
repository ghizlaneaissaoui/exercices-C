#include <stdio.h>

// Consigne : Demander à l’utilisateur de saisir des notes (entre 0 et 20) en calculant – au fur et à mesure – la somme des notes et en mémorisant la note la plus basse et la note la plus haute et lui expliquer qu’une valeur hors de cet intervalle arrêtera la saisie.
// Compter les notes saisies. Une fois la saisie terminée, calculer et afficher la moyenne, le nombre de notes saisies, la note la plus basse et la plus haute, ou un message d’erreur si aucune note n’a été saisie,

int main()
{
    int nombrenotes;
    float note, sommeNotes, notemin, notemax;

    printf("Entrez une note entre 0 et 20, pour arreter la saisie; saisissez une valeur hors de cet intervalle.");

    nombrenotes = 0;
    sommeNotes = 0;
    notemax = 0;
    notemin = 20;

    do
    {
        scanf("%f", &note);
        sommeNotes = sommeNotes + note;
        nombrenotes++;

        if ((note >= 0) && (note < notemin))
            notemin = note;
        if ((note <= 20) && (note > notemax))
            notemax = note;

    } while ((note >= 0) && (note <= 20));
    nombrenotes--;
    sommeNotes = sommeNotes - note;

    if (nombrenotes > 0)
    {

        printf("Le nombre de notes saisies est %d note(s) \n", nombrenotes);
        printf("La note maximale est %.2f\n", notemax);
        printf("La note minimale est %.2f\n", notemin);
        printf("La moyenne des notes est %.2f\n", sommeNotes / nombrenotes);
    }
    else
    {
        printf("Erreur ; Aucune note saisie");
    }
    return 0;
}
