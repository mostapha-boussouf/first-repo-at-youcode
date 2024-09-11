//Challenge 8 : Mention Obtenue
//Nous d�sirons afficher la mention obtenue par un �l�ve en fonction de la moyenne de ses notes.
//S�il a une moyenne strictement inf�rieure � 10, il est recal�. S�il a une moyenne entre 10 (inclus) et 12, il obtient la mention passable.
//S�il a une moyenne entre 12 (inclus) et 14, il obtient la mention assez bien. S�il a une moyenne entre 14 (inclus) et 16,
 //il obtient la mention bien. S�il a une moyenne sup�rieure � 16 (inclus) il obtient la mention tr�s bien. �crire les instructions n�cessaires.

#include <stdio.h>

int main() {
    float moyenne;

    // Demander � l'utilisateur de saisir la moyenne
    printf("Entrez la moyenne de l'�l�ve : ");
    scanf("%f", &moyenne);

    // D�terminer la mention en fonction de la moyenne
    if (moyenne < 10) {
        printf("Mention obtenue : Recal�\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention obtenue : Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention obtenue : Assez bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention obtenue : Bien\n");
    } else {
        printf("Mention obtenue : Tr�s bien\n");
    }

    return 0;
}
