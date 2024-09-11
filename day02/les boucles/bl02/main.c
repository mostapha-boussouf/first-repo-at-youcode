#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorielle = 1;

    // Demande � l'utilisateur d'entrer un nombre entier positif
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &n);

    // V�rifie si le nombre est n�gatif
    if (n < 0) {
        printf("La factorielle n'existe pas pour les nombres n�gatifs.\n");
    } else {
        // Calcul de la factorielle
        for (i = 1; i <= n; i++) {
            factorielle *= i;
        }

        // Affichage du r�sultat
        printf("%d! = %llu\n", n, factorielle);
    }

    return 0;
}
