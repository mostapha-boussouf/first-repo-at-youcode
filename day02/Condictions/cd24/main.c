#include <stdio.h>

int main() {
    int score;       // Score de performance (de 0 � 100)
    int anciennete;  // Anciennet� en ann�es
    int recompenses; // R�compenses re�ues (0 pour aucune, 1 pour une, 2 pour deux ou plus)
    float bonus = 0; // Bonus bas� sur les r�compenses
    float score_final; // Score final apr�s ajout du bonus

    // Lire les informations
    printf("Entrez le score de performance (de 0 � 100) : ");
    scanf("%d", &score);
    printf("Entrez l'anciennet� en ann�es : ");
    scanf("%d", &anciennete);
    printf("Entrez le nombre de r�compenses (0 pour aucune, 1 pour une, 2 pour deux ou plus) : ");
    scanf("%d", &recompenses);

    // Ajouter un bonus bas� sur le nombre de r�compenses
    if (recompenses == 1) {
        bonus = 0.10; // 10% pour une r�compense
    } else if (recompenses >= 2) {
        bonus = 0.20; // 20% pour deux r�compenses ou plus
    }

    // Calculer le score final apr�s ajout du bonus
    score_final = score + (score * bonus);

    // �valuer la performance de l'employ�
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
