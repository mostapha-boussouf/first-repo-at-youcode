#include <stdio.h>

int main() {
    float budget;         // Budget en euros
    int destination;      // Destination (1 pour plage, 2 pour montagne, 3 pour ville)
    int personnes;        // Nombre de personnes
    char *type_voyage;    // Type de voyage (haut de gamme, moyen, �conomique)
    char *recommandation; // Recommandation de destination

    // Saisie des informations
    printf("Entrez votre budget (en euros) : ");
    scanf("%f", &budget);
    printf("Entrez la destination (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &destination);
    printf("Entrez le nombre de personnes : ");
    scanf("%d", &personnes);

    // D�terminer le type de voyage en fonction du budget
    if (budget >= 1000) {
        type_voyage = "Voyage haut de gamme";
    } else if (budget >= 500) {
        type_voyage = "Voyage moyen";
    } else {
        type_voyage = "Voyage �conomique";
    }

    // Recommander une destination en fonction du budget et du nombre de personnes
    if (destination == 1) { // Plage
        if (budget >= 1000 && personnes > 2) {
            recommandation = "Plage recommand�e";
        } else {
            recommandation = "Budget insuffisant ou nombre de personnes inadapt� pour un voyage � la plage";
        }
    } else if (destination == 2) { // Montagne
        if (budget >= 500 && personnes <= 2) {
            recommandation = "Montagne recommand�e";
        } else {
            recommandation = "Budget insuffisant ou trop de personnes pour un voyage � la montagne";
        }
    } else if (destination == 3) { // Ville
        recommandation = "Ville recommand�e pour tout budget";
    } else {
        recommandation = "Destination invalide";
    }

    // Afficher les r�sultats
    printf("\nType de voyage : %s\n", type_voyage);
    printf("Recommandation : %s\n", recommandation);

    return 0;
}
