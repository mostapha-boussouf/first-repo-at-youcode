#include <stdio.h>

int main() {
    char caractere;

    // Demander à l'utilisateur de saisir un caractère
    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    // Vérifier si le caractère est une lettre majuscule
    if (caractere >= 'A' && caractere <= 'Z') {
        printf("Le caractère '%c' est une lettre majuscule.\n", caractere);
    } else {
        printf("Le caractère '%c' n'est pas une lettre majuscule.\n", caractere);
    }

    return 0;
}
