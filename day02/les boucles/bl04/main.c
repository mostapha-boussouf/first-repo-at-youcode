#include <stdio.h>

int main() {
    int n, i, nombre_impair = 1;

    // Demande à l'utilisateur d'entrer un nombre entier positif
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &n);

    // Affichage des n premiers nombres impairs
    printf("Les %d premiers nombres impairs sont : ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", nombre_impair);
        nombre_impair += 2; // Passer au prochain nombre impair
    }

    printf("\n");
    return 0;
}
