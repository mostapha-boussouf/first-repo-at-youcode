//Challenge 5 : Affichage Temp�rature
//�crivez un programme qui demande la temp�rature en Celsius et affiche l'�tat de l'eau � cette temp�rature (solide, liquide, gaz). R�gle :

//C < 0 : Solide
//0 <= C < 100 : Liquide
//C >= 100 : Gaz

#include <stdio.h>

int main() {
    float celsius;

    // Demander la temp�rature en Celsius
    printf("Entrez la temp�rature en Celsius : ");
    scanf("%f", &celsius);

    // V�rifier l'�tat de l'eau en fonction de la temp�rature
    if (celsius < 0) {
        printf("L'eau est � l'�tat solide (glace).\n");
    } else if (celsius >= 0 && celsius < 100) {
        printf("L'eau est � l'�tat liquide.\n");
    } else {
        printf("L'eau est � l'�tat gazeux (vapeur).\n");
    }

    return 0;
}
