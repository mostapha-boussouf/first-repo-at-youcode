#include <stdio.h>
#include <math.h>

int main() {
    float rayon, volume;

    // Demander � l'utilisateur de saisir le rayon de la sph�re
    printf("Entrez le rayon de la sph�re : ");
    scanf("%f", &rayon);

    // Calculer le volume de la sph�re
    volume = (4.0 / 3.0) * M_PI * pow(rayon, 3);

    // Afficher le r�sultat
    printf("Le volume de la sph�re avec un rayon de %.2f est %.2f\n", rayon, volume);

    return 0;
}
