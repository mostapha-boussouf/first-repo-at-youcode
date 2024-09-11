//Challenge 2 : Voyelle ou Non
//�crivez un programme en C qui v�rifie si un caract�re saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.
#include <stdio.h>

int main() {
    char caractere;

    // Saisie du caract�re
    printf("Entrez un caract�re : ");
    scanf("%c", &caractere);

    // Utilisation du switch pour v�rifier si le caract�re est une voyelle
    switch (caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c est une voyelle.\n", caractere);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", caractere);
    }

    return 0;
}
