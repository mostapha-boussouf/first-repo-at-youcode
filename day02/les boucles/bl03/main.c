#include <stdio.h>

int main() {
    int n, i, somme = 0;

    // Demande à l'utilisateur d'entrer un nombre entier positif
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &n);

    // Calcul de la somme des n premiers nombres naturels
    for (i = 1; i <= n; i++) {
        somme += i;
    }

    // Affichage du résultat
    printf("La somme des %d premiers nombres naturels est : %d\n", n, somme);

    return 0;
}
