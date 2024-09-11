#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, suivant;

    // Demande à l'utilisateur d'entrer le nombre de termes
    printf("Entrez le nombre de termes de la suite de Fibonacci : ");
    scanf("%d", &n);

    // Affiche les premiers termes de la suite de Fibonacci
    printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        suivant = t1 + t2;
        t1 = t2;
        t2 = suivant;
    }

    printf("\n");
    return 0;
}
