//Challenge 3 : Somme de Deux Valeurs
//Écrivez un programme C pour calculer la somme de deux valeurs entières données.
// Si les deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme.
#include <stdio.h>

int main() {
    int valeur1, valeur2, somme;

    // Saisie des deux valeurs
    printf("Entrez la premiere valeur : ");
    scanf("%d", &valeur1);
    printf("Entrez la deuxieme valeur : ");
    scanf("%d", &valeur2);

    // Vérification si les deux valeurs sont identiques
    if (valeur1 == valeur2) {
        somme = 3 * (valeur1 + valeur2); // Triple de la somme si les deux valeurs sont identiques
    } else {
        somme = valeur1 + valeur2; // Simple somme si les deux valeurs sont différentes
    }

    // Affichage du résultat
    printf("Le resultat est : %d\n", somme);

    return 0;
}
