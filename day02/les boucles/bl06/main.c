#include <stdio.h>

int main() {
    int n;

    // Demande à l'utilisateur d'entrer la valeur de n
    printf("Entrez un nombre entier n: ");
    scanf("%d", &n);

    printf("Les %d premiers nombres pairs sont :\n", n);

    // Affichage des n premiers nombres pairs
    for (int i = 1; i <= n; i++) {
        printf("%d ", 2 * i);  // Les nombres pairs sont 2, 4, 6, 8, ...
    }

    printf("\n");
    return 0;
}
