#include <stdio.h>
#include <math.h>  // Inclure la biblioth�que math�matique pour utiliser pow()

int main() {
    float a, b, c;
    float moyenne_geometrique;

    // Saisie des trois nombres
    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &b);

    printf("Entrez le troisieme nombre : ");
    scanf("%f", &c);

    // Calcul de la moyenne g�om�trique
    moyenne_geometrique = pow(a * b * c, 1.0 / 3.0);

    // Affichage du r�sultat
    printf("La moyenne geometrique est : %.3f\n", moyenne_geometrique);

    return 0;
}
