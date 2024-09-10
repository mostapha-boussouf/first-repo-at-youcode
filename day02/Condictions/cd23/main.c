#include <stdio.h>

int main() {
    int jours_accorder;   // Nombre total de jours de congés accordés
    int jours_utilises;   // Nombre de jours de congés utilisés
    int statut;           // Statut de l'employé (0 pour temps partiel, 1 pour temps plein)
    int jours_restants;   // Jours de congés restants

    // Lire les informations
    printf("Nombre total de jours de congés accordés : ");
    scanf("%d", &jours_accorder);
    printf("Nombre de jours de congés utilisés : ");
    scanf("%d", &jours_utilises);
    printf("Statut de l'employé (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &statut);

    // Vérifier si les jours utilisés dépassent les jours accordés
    if (jours_utilises > jours_accorder) {
        printf("Alerte : Les jours de congés utilisés dépassent les jours accordés.\n");
        return 1; // Erreur : jours utilisés dépassent les jours accordés
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

    // Afficher le résultat
    printf("Jours de congés restants : %d\n", jours_restants);

    return 0; // Succès : programme terminé correctement
}
