#include <stdio.h>

int main() {
    int nombre, inverse = 0, reste;

    // Demande à l'utilisateur d'entrer un nombre entier
    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    // Inversion de l'entier
    while (nombre != 0) {
        reste = nombre % 10;        // Obtient le dernier chiffre
        inverse = inverse * 10 + reste;  // Ajoute le dernier chiffre à l'inverse
        nombre = nombre / 10;       // Supprime le dernier chiffre
    }

    // Affichage du nombre inversé
    printf("Le nombre inversé est : %d\n", inverse);

    return 0;
}
