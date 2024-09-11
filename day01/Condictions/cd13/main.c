//Challenge 13 : Point sur un Segment
//Écrivez un programme C qui lit les coordonnées des deux extrémités d'un segment, et lit ensuite les coordonnées d'un point dans le plan et dit si ce dernier se trouve ou non sur le segment.

#include <stdio.h>

// Fonction pour vérifier si un point est sur un segment
int estSurSegment(float x1, float y1, float x2, float y2, float x, float y) {
    // Vérifie si le point (x, y) est colinéaire avec le segment (x1, y1) - (x2, y2)
    float det = (x - x1) * (y2 - y1) - (y - y1) * (x2 - x1);
    if (det != 0) {
        return 0; // Le point n'est pas colinéaire avec le segment
    }

    // Vérifie si le point (x, y) est dans les limites du segment
    if (x < (x1 < x2 ? x1 : x2) || x > (x1 > x2 ? x1 : x2) ||
        y < (y1 < y2 ? y1 : y2) || y > (y1 > y2 ? y1 : y2)) {
        return 0; // Le point est en dehors des limites du segment
    }

    return 1; // Le point est sur le segment
}

int main() {
    float x1, y1, x2, y2; // Coordonnées des extrémités du segment
    float x, y;           // Coordonnées du point à vérifier

    // Lire les coordonnées des extrémités du segment
    printf("Entrez les coordonnées de la première extrémité du segment (x1 y1) : ");
    scanf("%f %f", &x1, &y1);
    printf("Entrez les coordonnées de la deuxième extrémité du segment (x2 y2) : ");
    scanf("%f %f", &x2, &y2);

    // Lire les coordonnées du point
    printf("Entrez les coordonnées du point à vérifier (x y) : ");
    scanf("%f %f", &x, &y);

    // Vérifier si le point est sur le segment
    if (estSurSegment(x1, y1, x2, y2, x, y)) {
        printf("Le point (%f, %f) est sur le segment.\n", x, y);
    } else {
        printf("Le point (%f, %f) n'est pas sur le segment.\n", x, y);
    }

    return 0;
}
