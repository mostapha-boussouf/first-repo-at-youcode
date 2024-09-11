#include <stdio.h>

int main() {
    int base, exposant, resultat = 1;

    // Demande à l'utilisateur d'entrer la base et l'exposant
    printf("Entrez la base: ");
    scanf("%d", &base);
    printf("Entrez l'exposant: ");
    scanf("%d", &exposant);

    // Utilisation d'une boucle pour calculer la puissance
    for (int i = 0; i < exposant; i++) {
        resultat *= base;  // Multiplie la base par elle-même 'exposant' fois
    }

    // Affichage du résultat
    printf("%d^%d = %d\n", base, exposant, resultat);

    return 0;
}

