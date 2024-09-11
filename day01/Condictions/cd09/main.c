//Challenge 9 : Vérification d'Alphabet
//Écrivez un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou non. Et s'il l'est,
// dire en plus s’il est une minuscule ou une majuscule.

#include <stdio.h>

int main() {
    char caractere;

    // Demander à l'utilisateur de saisir un caractère
    printf("Entrez un caractère : ");
    scanf("%c", &caractere);

    // Vérifier si le caractère est une lettre de l'alphabet
    if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= 'a' && caractere <= 'z')) {
        if (caractere >= 'A' && caractere <= 'Z') {
            printf("Le caractère '%c' est une lettre majuscule.\n", caractere);
        } else {
            printf("Le caractère '%c' est une lettre minuscule.\n", caractere);
        }
    } else {
        printf("Le caractère '%c' n'est pas une lettre de l'alphabet.\n", caractere);
    }

    return 0;
}
