#include <stdio.h>

int main() {
    float salaire_base, salaire_total, prime, taux_horaire;
    int heures_supp, poste;

    // Saisie des informations
    printf("Entrez le salaire de base (en euros) : ");
    scanf("%f", &salaire_base);
    printf("Entrez le nombre d'heures supplementaires : ");
    scanf("%d", &heures_supp);
    printf("Entrez le type de poste (1 pour junior, 2 pour senior) : ");
    scanf("%d", &poste);

    // Calcul du taux horaire
    taux_horaire = salaire_base / 160; // On considère 160 heures de travail par mois

    // Calcul de la prime en fonction du type de poste
    if (poste == 1) {
        prime = salaire_base * 0.10;  // Prime de 10% pour un poste junior
    } else if (poste == 2) {
        prime = salaire_base * 0.20;  // Prime de 20% pour un poste senior
    } else {
        printf("Type de poste invalide.\n");
        return 1;
    }

    // Calcul du salaire total
    salaire_total = salaire_base + prime + (heures_supp * taux_horaire * 1.5);

    // Affichage du salaire total
    printf("Le salaire total avec primes est : %.2f euros\n", salaire_total);

    return 0;
}
