#include <stdio.h>

int main() {
    float kmh, ms;

    // Demander la vitesse en kilom�tres par heure
    printf("Entrez la vitesse en km/h : ");
    scanf("%f", &kmh);

    // Conversion km/h en m/s
    ms = kmh * 0.27778;

    // Affichage du r�sultat
    printf("La vitesse en m/s est : %.2f\n", ms);

    return 0;
}
