//Challenge 10 : Volume d'une sphère
//Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de l'utilisateur. Formule pour le volume d'une sphère :

//Volume = (4/3) * π * r³

#include <stdio.h>
#include <math.h>

int main() {
    float rayon, volume;

    // Demander à l'utilisateur de saisir le rayon de la sphère
    printf("Entrez le rayon de la sphère : ");
    scanf("%f", &rayon);

    // Calculer le volume de la sphère
    volume = (4.0 / 3.0) * M_PI * pow(rayon, 3);

    // Afficher le résultat
    printf("Le volume de la sphère avec un rayon de %.2f est %.2f\n", rayon, volume);

    return 0;
}
