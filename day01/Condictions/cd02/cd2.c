//Challenge 2 : Voyelle ou Non
//Écrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.
#include <stdio.h>

int main() {
    char caractere;

    // Saisie du caractère
    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    // Utilisation du switch pour vérifier si le caractère est une voyelle
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
