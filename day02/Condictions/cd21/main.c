#include <stdio.h>

int main() {
    float revenu;       // Revenu annuel
    int score_credit;   // Score de crédit
    int duree_pret;     // Durée du prêt en années

    // Lire les informations du prêt
    printf("Revenu annuel (en euros) : ");
    scanf("%f", &revenu);
    printf("Score de crédit (sur 1000) : ");
    scanf("%d", &score_credit);
    printf("Durée du prêt (en années) : ");
    scanf("%d", &duree_pret);

    // Vérifier l'éligibilité
    if (revenu >= 30000 && score_credit >= 700 && duree_pret <= 10) {
        printf("Éligible pour le prêt.\n");
    } else if (revenu >= 30000 && score_credit >= 650 && duree_pret <= 15) {
        printf("Éligible avec conditions.\n");
    } else {
        printf("Non éligible pour le prêt.\n");
    }

    return 0;
}
