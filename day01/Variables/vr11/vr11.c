//Challenge 11 : Surface d'un rectangle
//Écrivez un programme pour trouver la surface d'un rectangle. Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur. Formule pour la surface d'un rectangle :

//Surface = longueur * largeur

#include <stdio.h>

#include <stdio.h>

int main() {
    float longueur, largeur, surface;

    // Saisie de la longueur et de la largeur du rectangle
    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);

    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);

    // Calcul de la surface
    surface = longueur * largeur;

    // Affichage du résultat
    printf("La surface du rectangle est : %.2f\n", surface);

    return 0;
}
