#include <stdio.h>

int main() {
    int valeur1, valeur2, somme;

    // Demander � l'utilisateur de saisir deux valeurs enti�res
    printf("Entrez la premi�re valeur enti�re : ");
    scanf("%d", &valeur1);

    printf("Entrez la deuxi�me valeur enti�re : ");
    scanf("%d", &valeur2);

    // V�rifier si les deux valeurs sont identiques
    if (valeur1 == valeur2) {
        somme = 3 * (valeur1 + valeur2);  // Renvoie le triple de leur somme si identiques
    } else {
        somme = valeur1 + valeur2;  // Sinon, renvoie simplement la somme
    }

    // Afficher la somme ou le triple de la somme
    printf("Le r�sultat est : %d\n", somme);

    return 0;
}
