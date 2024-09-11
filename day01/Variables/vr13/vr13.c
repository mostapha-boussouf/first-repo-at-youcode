//Challenge 13 : Affichage des valeurs binaire et hexadécimale équivalentes
//Écrivez un programme C pour afficher la valeur équivalente en binaire et en hexadécimal. Entrez un nombre entier et affichez ses valeurs équivalentes en binaire et en hexadécimal.

#include <stdio.h>

int main() {
    int nombre;

    // Demander à l'utilisateur de saisir un nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Afficher la valeur hexadécimale
    printf("Valeur en hexadécimal : %X\n", nombre);

    // Afficher la valeur binaire
    printf("Valeur en binaire : ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (nombre >> i) & 1);
    }
    printf("\n");

    return 0;
}
