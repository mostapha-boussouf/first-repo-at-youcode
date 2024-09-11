//Challenge 13 : Point sur un Segment
//�crivez un programme C qui lit les coordonn�es des deux extr�mit�s d'un segment, et lit ensuite les coordonn�es d'un point dans le plan et dit si ce dernier se trouve ou non sur le segment.

#include <stdio.h>

// Fonction pour v�rifier si un point est sur un segment
int estSurSegment(float x1, float y1, float x2, float y2, float x, float y) {
    // V�rifie si le point (x, y) est colin�aire avec le segment (x1, y1) - (x2, y2)
    float det = (x - x1) * (y2 - y1) - (y - y1) * (x2 - x1);
    if (det != 0) {
        return 0; // Le point n'est pas colin�aire avec le segment
    }

    // V�rifie si le point (x, y) est dans les limites du segment
    if (x < (x1 < x2 ? x1 : x2) || x > (x1 > x2 ? x1 : x2) ||
        y < (y1 < y2 ? y1 : y2) || y > (y1 > y2 ? y1 : y2)) {
        return 0; // Le point est en dehors des limites du segment
    }

    return 1; // Le point est sur le segment
}

int main() {
    float x1, y1, x2, y2; // Coordonn�es des extr�mit�s du segment
    float x, y;           // Coordonn�es du point � v�rifier

    // Lire les coordonn�es des extr�mit�s du segment
    printf("Entrez les coordonn�es de la premi�re extr�mit� du segment (x1 y1) : ");
    scanf("%f %f", &x1, &y1);
    printf("Entrez les coordonn�es de la deuxi�me extr�mit� du segment (x2 y2) : ");
    scanf("%f %f", &x2, &y2);

    // Lire les coordonn�es du point
    printf("Entrez les coordonn�es du point � v�rifier (x y) : ");
    scanf("%f %f", &x, &y);

    // V�rifier si le point est sur le segment
    if (estSurSegment(x1, y1, x2, y2, x, y)) {
        printf("Le point (%f, %f) est sur le segment.\n", x, y);
    } else {
        printf("Le point (%f, %f) n'est pas sur le segment.\n", x, y);
    }

    return 0;
}
