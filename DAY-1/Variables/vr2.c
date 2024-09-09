#include <stdio.h>

int main() {
    float kilometres, yards;

    // Demander la distance en kilometres
    printf("Entrez la distance en kilomètres : ");
    scanf("%f", &kilometres);

    // Conversion kilometres en yards
    yards = kilometres * 1093.61;

    // Affichage du resultat
    printf("La distance en yards est : %.2f\n", yards);

    return 0;
}
