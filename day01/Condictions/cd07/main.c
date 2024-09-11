//Challenge 7 : Alphabet Majuscule
//Écrivez un programme pour vérifier si le caractère donné est un alphabet majuscule ou non en utilisant l'instruction conditionnelle if-else.
 //Les lettres majuscules vont de 'A' à 'Z'. Les valeurs ASCII de 'A' et 'Z' sont respectivement 65 et 90.
 //Si la valeur ASCII d'un caractère est comprise entre 65 et 90, il s'agit d'un alphabet majuscule.
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
