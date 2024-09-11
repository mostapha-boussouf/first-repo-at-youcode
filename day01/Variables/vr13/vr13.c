//Challenge 13 : Affichage des valeurs binaire et hexad�cimale �quivalentes
//�crivez un programme C pour afficher la valeur �quivalente en binaire et en hexad�cimal. Entrez un nombre entier et affichez ses valeurs �quivalentes en binaire et en hexad�cimal.

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
