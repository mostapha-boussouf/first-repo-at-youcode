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
