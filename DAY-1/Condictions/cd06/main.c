#include <stdio.h>

int main() {
    char caractere;

    // Demander � l'utilisateur de saisir un caract�re
    printf("Entrez un caract�re : ");
    scanf("%c", &caractere);

    // V�rifier si le caract�re est une lettre majuscule
    if (caractere >= 'A' && caractere <= 'Z') {
        printf("Le caract�re '%c' est une lettre majuscule.\n", caractere);
    } else {
        printf("Le caract�re '%c' n'est pas une lettre majuscule.\n", caractere);
    }

    return 0;
}
