//Challenge 6 : Calcul et affichage des résultats
//Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.

#include <stdio.h>

int main() {
    float a, b;

    // Saisie des deux nombres réels
    printf("Entrez le premier nombre (a) : ");
    scanf("%f", &a);

    printf("Entrez le deuxieme nombre (b) : ");
    scanf("%f", &b);

    // Calculs et affichage des résultats
    printf("\resultats :\n");
    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);

    // Vérification pour éviter la division par zéro
    if (b != 0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("La division par zéro est impossible.\n");
    }

    return 0;
}
