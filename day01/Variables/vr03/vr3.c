//Challenge 3 : Conversion de la distance
//�crivez un programme qui demande la distance en kilom�tres et la transforme en yards. Formule :

//Yards = Km * 1093.61

#include <stdio.h>

int main() {
    float kilometres, yards;

    // Demander la distance en kilometres
    printf("Entrez la distance en kilom�tres : ");
    scanf("%f", &kilometres);

    // Conversion kilometres en yards
    yards = kilometres * 1093.61;

    // Affichage du resultat
    printf("La distance en yards est : %.2f\n", yards);

    return 0;
}
