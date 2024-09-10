#include <stdio.h>

int main() {
    int score;       // Score de performance (de 0 à 100)
    int anciennete;  // Ancienneté en années
    int recompenses; // Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus)
    float bonus = 0; // Bonus basé sur les récompenses
    float score_final; // Score final après ajout du bonus

    // Lire les informations
    printf("Entrez le score de performance (de 0 à 100) : ");
    scanf("%d", &score);
    printf("Entrez l'ancienneté en années : ");
    scanf("%d", &anciennete);
    printf("Entrez le nombre de récompenses (0 pour aucune, 1 pour une, 2 pour deux ou plus) : ");
    scanf("%d", &recompenses);

    // Ajouter un bonus basé sur le nombre de récompenses
    if (recompenses == 1) {
        bonus = 0.10; // 10% pour une récompense
    } else if (recompenses >= 2) {
        bonus = 0.20; // 20% pour deux récompenses ou plus
    }

    // Calculer le score final après ajout du bonus
    score_final = score + (score * bonus);

    // Évaluer la performance de l'employé
    if (score_final >= 90 && anciennete >= 5) {
        printf("Performance : Excellente\n");
    } else if (score_final >= 75 && anciennete >= 3) {
        printf("Performance : Bonne\n");
    } else if (score_final >= 50 && anciennete < 3) {
        printf("Performance : Satisfaisante\n");
    } else {
        printf("Performance : Insuffisante\n");
    }

    return 0;
}
