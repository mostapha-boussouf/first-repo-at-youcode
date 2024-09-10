#include <stdio.h>

int main() {
    int valeur1, valeur2, somme;

    // Demander à l'utilisateur de saisir deux valeurs entières
    printf("Entrez la première valeur entière : ");
    scanf("%d", &valeur1);

    printf("Entrez la deuxième valeur entière : ");
    scanf("%d", &valeur2);

    // Vérifier si les deux valeurs sont identiques
    if (valeur1 == valeur2) {
        somme = 3 * (valeur1 + valeur2);  // Renvoie le triple de leur somme si identiques
    } else {
        somme = valeur1 + valeur2;  // Sinon, renvoie simplement la somme
    }

    // Afficher la somme ou le triple de la somme
    printf("Le résultat est : %d\n", somme);

    return 0;
}
