#include <stdio.h>

int main() {
    float revenu, impots, deductions;
    int statut_fiscal;

    // Saisie des informations
    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%f", &revenu);
    printf("Entrez votre statut fiscal (1 pour celibataire, 2 pour marie, 3 pour chef de famille) : ");
    scanf("%d", &statut_fiscal);

    // Détermination des déductions en fonction du statut fiscal
    if (statut_fiscal == 1) {
        deductions = 1000.0; // Célibataire
    } else if (statut_fiscal == 2) {
        deductions = 2000.0; // Marié
    } else if (statut_fiscal == 3) {
        deductions = 3000.0; // Chef de famille
    } else {
        printf("Statut fiscal invalide.\n");
        return 1;
    }

    // Calcul du revenu imposable
    revenu -= deductions;
    if (revenu < 0) {
        revenu = 0;
    }

    // Calcul des impôts en fonction des tranches de revenu
    if (revenu <= 20000) {
        impots = revenu * 0.05;
    } else if (revenu <= 50000) {
        impots = 20000 * 0.05 + (revenu - 20000) * 0.10;
    } else {
        impots = 20000 * 0.05 + 30000 * 0.10 + (revenu - 50000) * 0.20;
    }

    // Affichage du résultat
    printf("Le montant des impots a payer est : %.2f euros\n", impots);

    return 0;
}
