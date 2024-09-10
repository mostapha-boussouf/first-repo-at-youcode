#include <stdio.h>

int main() {
    int nombre;

    // Demander � l'utilisateur de saisir un nombre
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // V�rifier si le nombre est positif, n�gatif ou nul
    if (nombre > 0) {
        printf("Le nombre %d est positif.\n", nombre);
    } else if (nombre < 0) {
        printf("Le nombre %d est n�gatif.\n", nombre);
    } else {
        printf("Le nombre est nul.\n");
    }

    return 0;
}
