#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorielle = 1;

    // Demande à l'utilisateur d'entrer un nombre entier positif
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &n);

    // Vérifie si le nombre est négatif
    if (n < 0) {
        printf("La factorielle n'existe pas pour les nombres négatifs.\n");
    } else {
        // Calcul de la factorielle
        for (i = 1; i <= n; i++) {
            factorielle *= i;
        }

        // Affichage du résultat
        printf("%d! = %llu\n", n, factorielle);
    }

    return 0;
}
