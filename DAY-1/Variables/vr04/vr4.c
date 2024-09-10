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
