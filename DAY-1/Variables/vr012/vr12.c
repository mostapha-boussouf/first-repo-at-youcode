#include <stdio.h>

int main() {
    int nombre;

    // Demander � l'utilisateur de saisir un nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Afficher la valeur hexad�cimale
    printf("Valeur en hexad�cimal : %X\n", nombre);

    // Afficher la valeur binaire
    printf("Valeur en binaire : ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (nombre >> i) & 1);
    }
    printf("\n");

    return 0;
}
