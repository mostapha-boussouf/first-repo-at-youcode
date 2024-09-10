#include <stdio.h>

int main() {
    int nombre, mille, cent, dix, unite, inverse;

    // Demander à l'utilisateur de saisir un nombre entier à 4 chiffres
    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d", &nombre);

    // Extraire chaque chiffre
    mille = nombre / 1000;        // Extraire le chiffre des milliers
    cent = (nombre / 100) % 10;   // Extraire le chiffre des centaines
    dix = (nombre / 10) % 10;     // Extraire le chiffre des dizaines
    unite = nombre % 10;          // Extraire le chiffre des unités

    // Inverser l'ordre des chiffres
    inverse = unite * 1000 + dix * 100 + cent * 10 + mille;

    // Afficher le nombre inversé
    printf("L'inverse de %d est %d\n", nombre, inverse);

    return 0;
}
