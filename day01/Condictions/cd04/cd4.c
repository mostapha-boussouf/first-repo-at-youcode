//Challenge 4 : Equation du Deuxième Degré
//Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, racine1, racine2;

    // Entrée des coefficients a, b et c
    printf("Entrez les coefficients a, b et c :\n");
    scanf("%f %f %f", &a, &b, &c);

    // Calcul du discriminant
    discriminant = b * b - 4 * a * c;

    // Cas où le discriminant est positif (deux solutions réelles)
    if (discriminant > 0) {
        racine1 = (-b + sqrt(discriminant)) / (2 * a);
        racine2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Deux solutions réelles : %.2f et %.2f\n", racine1, racine2);
    }
    // Cas où le discriminant est nul (une solution réelle)
    else if (discriminant == 0) {
        racine1 = -b / (2 * a);
        printf("Une solution réelle : %.2f\n", racine1);
    }
    // Cas où le discriminant est négatif (pas de solution réelle)
    else {
        printf("Pas de solution réelle.\n");
    }

    return 0;
}
