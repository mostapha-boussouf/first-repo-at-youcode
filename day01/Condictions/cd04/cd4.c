//Challenge 4 : Equation du Deuxi�me Degr�
//�crivez un programme C qui permet de calculer les solutions possibles d�une �quation du deuxi�me degr�.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, racine1, racine2;

    // Entr�e des coefficients a, b et c
    printf("Entrez les coefficients a, b et c :\n");
    scanf("%f %f %f", &a, &b, &c);

    // Calcul du discriminant
    discriminant = b * b - 4 * a * c;

    // Cas o� le discriminant est positif (deux solutions r�elles)
    if (discriminant > 0) {
        racine1 = (-b + sqrt(discriminant)) / (2 * a);
        racine2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Deux solutions r�elles : %.2f et %.2f\n", racine1, racine2);
    }
    // Cas o� le discriminant est nul (une solution r�elle)
    else if (discriminant == 0) {
        racine1 = -b / (2 * a);
        printf("Une solution r�elle : %.2f\n", racine1);
    }
    // Cas o� le discriminant est n�gatif (pas de solution r�elle)
    else {
        printf("Pas de solution r�elle.\n");
    }

    return 0;
}
