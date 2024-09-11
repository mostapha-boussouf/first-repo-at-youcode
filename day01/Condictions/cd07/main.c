//Challenge 7 : Alphabet Majuscule
//�crivez un programme pour v�rifier si le caract�re donn� est un alphabet majuscule ou non en utilisant l'instruction conditionnelle if-else.
 //Les lettres majuscules vont de 'A' � 'Z'. Les valeurs ASCII de 'A' et 'Z' sont respectivement 65 et 90.
 //Si la valeur ASCII d'un caract�re est comprise entre 65 et 90, il s'agit d'un alphabet majuscule.
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
