#include <stdio.h>

int main() {
    int nombre, i;

    // Demande � l'utilisateur d'entrer un nombre
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);

    // Affiche la table de multiplication de 1 � 10
    printf("Table de multiplication de %d:\n", nombre);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}
