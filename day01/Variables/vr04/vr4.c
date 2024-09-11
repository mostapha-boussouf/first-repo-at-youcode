//Challenge 4 : Conversion de la vitesse
//�crivez un programme qui demande la vitesse en kilom�tres par heure (km/h) et la transforme en m�tres par seconde (m/s). Formule :

//    m/s = km/h * 0.27778

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
