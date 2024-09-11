//Challenge 11 : Jour de la Semaine
//Écrivez un programme C qui affiche d'une manière aléatoire un des jours de la semaine.

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

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    // Générer un index aléatoire entre 0 et 6
    int index = rand() % 7;

    // Afficher le jour de la semaine correspondant
    printf("Jour aléatoire de la semaine : %s\n", joursDeLaSemaine[index]);

    return 0;
}
