//Challenge 11 : Jour de la Semaine
//�crivez un programme C qui affiche d'une mani�re al�atoire un des jours de la semaine.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Tableau des jours de la semaine
    const char* joursDeLaSemaine[] = {
        "Lundi",
        "Mardi",
        "Mercredi",
        "Jeudi",
        "Vendredi",
        "Samedi",
        "Dimanche"
    };

    // Initialiser le g�n�rateur de nombres al�atoires
    srand(time(NULL));

    // G�n�rer un index al�atoire entre 0 et 6
    int index = rand() % 7;

    // Afficher le jour de la semaine correspondant
    printf("Jour al�atoire de la semaine : %s\n", joursDeLaSemaine[index]);

    return 0;
}
