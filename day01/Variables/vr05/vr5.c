//Challenge 5 : Affichage Température
//Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :

//C < 0 : Solide
//0 <= C < 100 : Liquide
//C >= 100 : Gaz

#include <stdio.h>

int main() {
    float celsius;

    // Demander la température en Celsius
    printf("Entrez la température en Celsius : ");
    scanf("%f", &celsius);

    // Vérifier l'état de l'eau en fonction de la température
    if (celsius < 0) {
        printf("L'eau est à l'état solide (glace).\n");
    } else if (celsius >= 0 && celsius < 100) {
        printf("L'eau est à l'état liquide.\n");
    } else {
        printf("L'eau est à l'état gazeux (vapeur).\n");
    }

    return 0;
}
