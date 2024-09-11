//Challenge 6 : Positif, N�gatif ou Nul
//�crivez un programme pour v�rifier si le nombre donn� est positif, n�gatif ou nul.
// Si le nombre est inf�rieur � z�ro, alors le nombre est n�gatif et si le nombre est sup�rieur � z�ro, alors le nombre est positif.
// Si les deux conditions sont fausses, le nombre est �gal � z�ro.

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
