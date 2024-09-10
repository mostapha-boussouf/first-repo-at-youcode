#include <stdio.h>

int main() {
    int jours_accorder;   // Nombre total de jours de cong�s accord�s
    int jours_utilises;   // Nombre de jours de cong�s utilis�s
    int statut;           // Statut de l'employ� (0 pour temps partiel, 1 pour temps plein)
    int jours_restants;   // Jours de cong�s restants

    // Lire les informations
    printf("Nombre total de jours de cong�s accord�s : ");
    scanf("%d", &jours_accorder);
    printf("Nombre de jours de cong�s utilis�s : ");
    scanf("%d", &jours_utilises);
    printf("Statut de l'employ� (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &statut);

    // V�rifier si les jours utilis�s d�passent les jours accord�s
    if (jours_utilises > jours_accorder) {
        printf("Alerte : Les jours de cong�s utilis�s d�passent les jours accord�s.\n");
        return 1; // Erreur : jours utilis�s d�passent les jours accord�s
    }

    // Calculer les jours restants en fonction du statut
    if (statut == 1) { // Temps plein
        jours_restants = jours_accorder - jours_utilises;
    } else if (statut == 0) { // Temps partiel
        jours_restants = (jours_accorder / 2) - jours_utilises;
    } else {
        printf("Statut invalide.\n");
        return 1; // Erreur : statut invalide
    }

    // Afficher le r�sultat
    printf("Jours de cong�s restants : %d\n", jours_restants);

    return 0; // Succ�s : programme termin� correctement
}
