//Challenge 8 : Mention Obtenue
//Nous désirons afficher la mention obtenue par un élève en fonction de la moyenne de ses notes.
//S’il a une moyenne strictement inférieure à 10, il est recalé. S’il a une moyenne entre 10 (inclus) et 12, il obtient la mention passable.
//S’il a une moyenne entre 12 (inclus) et 14, il obtient la mention assez bien. S’il a une moyenne entre 14 (inclus) et 16,
 //il obtient la mention bien. S’il a une moyenne supérieure à 16 (inclus) il obtient la mention très bien. Écrire les instructions nécessaires.

#include <stdio.h>

int main() {
    float moyenne;

    // Demander à l'utilisateur de saisir la moyenne
    printf("Entrez la moyenne de l'élève : ");
    scanf("%f", &moyenne);

    // Déterminer la mention en fonction de la moyenne
    if (moyenne < 10) {
        printf("Mention obtenue : Recalé\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention obtenue : Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention obtenue : Assez bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention obtenue : Bien\n");
    } else {
        printf("Mention obtenue : Très bien\n");
    }

    return 0;
}
