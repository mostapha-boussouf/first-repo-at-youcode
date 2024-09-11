//Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
//Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D. Formule :

//Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, z1, x2, y2, z2, distance;

    // Saisie des coordonnées des deux points
    printf("Entrez x1, y1, z1 : ");
    scanf("%f %f %f", &x1, &y1, &z1);

    printf("Entrez x2, y2, z2 : ");
    scanf("%f %f %f", &x2, &y2, &z2);

    // Calcul de la distance
    distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) + (z2 - z1)*(z2 - z1));

    // Affichage du résultat
    printf("Distance = %.2f\n", distance);

    return 0;
}
