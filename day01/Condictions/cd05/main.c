#include <stdio.h>

int main() {
    int nombre;

    // Demander à l'utilisateur de saisir un nombre
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // Vérifier si le nombre est positif, négatif ou nul
    if (nombre > 0) {
        printf("Le nombre %d est positif.\n", nombre);
    } else if (nombre < 0) {
        printf("Le nombre %d est négatif.\n", nombre);
    } else {
        printf("Le nombre est nul.\n");
    }

    return 0;
}
