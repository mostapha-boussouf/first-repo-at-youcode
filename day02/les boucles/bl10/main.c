#include <stdio.h>

int main() {
    int n, somme = 0;

    // Demande à l'utilisateur de saisir un entier positif
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    // Utilisation d'une boucle pour calculer la somme des n premiers entiers naturels
    for (int i = 1; i <= n; i++) {
        somme += i;  // Ajoute chaque entier de 1 à n à la somme
    }

    // Affiche la somme des n premiers entiers naturels
    printf("La somme des %d premiers entiers naturels est : %d\n", n, somme);

    return 0;
}
