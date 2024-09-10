#include <stdio.h>

int main() {
    float nombre1, nombre2, nombre3;
    float moyenne_ponderee;

    // Saisie des trois nombres
    printf("Entrez le premier nombre : ");
    scanf("%f", &nombre1);

    printf("Entrez le deuxième nombre : ");
    scanf("%f", &nombre2);

    printf("Entrez le troisième nombre : ");
    scanf("%f", &nombre3);

    // Calcul de la moyenne pondérée
    moyenne_ponderee = (nombre1 * 2 + nombre2 * 3 + nombre3 * 5) / (2 + 3 + 5);

    // Affichage du résultat
    printf("La moyenne pondere est : %.2f\n", moyenne_ponderee);

    return 0;
}
