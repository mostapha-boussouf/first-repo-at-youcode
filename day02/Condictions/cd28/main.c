#include <stdio.h>

int main() {
    int age, historique, couverture;

    // Saisie des informations
    printf("Entrez votre age : ");
    scanf("%d", &age);
    printf("Entrez votre historique medical (0 pour aucun probleme, 1 pour probleme mineur, 2 pour probleme majeur) : ");
    scanf("%d", &historique);
    printf("Entrez le type de couverture (1 pour de base, 2 pour etendue) : ");
    scanf("%d", &couverture);

    // Détermination du plan de santé
    if (age < 30) {
        printf("Plan de sante : Plan de base\n");
    } else if (age >= 30 && historique == 0) {
        printf("Plan de sante : Plan de base\n");
    } else if (age >= 30 && historique >= 1) {
        printf("Plan de sante : Plan etendu\n");
    }

    // Ajout de la couverture supplémentaire en cas de problèmes majeurs
    if (historique == 2) {
        printf("Ajout de la couverture supplementaire pour les problemes majeurs.\n");
    }

    return 0;
}
