//Challenge 1 : Paire ou Impaire
//Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.

#include <stdio.h>

int main() {
    int nombre;

    // Demander à l'utilisateur de saisir un nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Vérifier si le nombre est pair ou impair
    if (nombre % 2 == 0) {
        printf("Le nombre %d est pair.\n", nombre);
    } else {
        printf("Le nombre %d est impair.\n", nombre);
    }

    return 0;
}
