#include <stdio.h>

int main() {
    float a, b;

    // Saisie des deux nombres r�els
    printf("Entrez le premier nombre (a) : ");
    scanf("%f", &a);

    printf("Entrez le deuxieme nombre (b) : ");
    scanf("%f", &b);

    // Calculs et affichage des r�sultats
    printf("\resultats :\n");
    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);

    // V�rification pour �viter la division par z�ro
    if (b != 0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("La division par z�ro est impossible.\n");
    }

    return 0;
}
