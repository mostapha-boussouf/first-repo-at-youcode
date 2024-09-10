#include <stdio.h>

int main() {
    int age, annees_cotisation;
    float montant_epargne;

    // Saisie des informations
    printf("Entrez votre age : ");
    scanf("%d", &age);
    printf("Entrez le nombre d'annees de cotisation : ");
    scanf("%d", &annees_cotisation);
    printf("Entrez le montant total epargne (en euros) : ");
    scanf("%f", &montant_epargne);

    // Vérification des conditions
    if (age >= 65) {
        if (annees_cotisation >= 30 && montant_epargne >= 100000) {
            printf("Plan complet avec pension elevee.\n");
        } else if (annees_cotisation >= 20 && montant_epargne >= 50000) {
            printf("Plan partiel avec pension moyenne.\n");
        } else {
            printf("Vous n'etes pas eligible pour un plan de retraite.\n");
        }
    } else {
        printf("Plan epargne non encore disponible. Vous n'avez pas encore atteint l'age de 65 ans.\n");
    }

    return 0;
}
