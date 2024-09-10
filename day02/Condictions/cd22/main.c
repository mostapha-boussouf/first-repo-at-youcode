#include <stdio.h>

int main() {
    int age;              // Âge du conducteur
    int type_voiture;     // Type de voiture (1: sportive, 2: utilitaire, 3: familiale)
    int accidents;        // Nombre d'accidents au cours des 5 dernières années
    float prime_base = 1000.0;  // Prime de base en euros
    float prime;          // Prime calculée
    float prime_finale;   // Prime finale après ajustements

    // Lire les informations
    printf("age du conducteur (en années) : ");
    scanf("%d", &age);
    printf("Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &type_voiture);
    printf("Nombre d'accidents au cours des 5 dernières années : ");
    scanf("%d", &accidents);

    // Calcul de la prime en fonction de l'âge du conducteur
    if (age < 25) {
        prime = prime_base * 1.5;
    } else if (age <= 65) {
        prime = prime_base;
    } else {
        prime = prime_base * 1.2;
    }

    // Ajuster la prime en fonction du type de voiture
    switch (type_voiture) {
        case 1: // Sportive
            prime *= 2;
            break;
        case 2: // Utilitaire
            prime *= 1.2;
            break;
        case 3: // Familiale
            prime *= 1.1;
            break;
        default:
            printf("Type de voiture invalide.\n");
            return 1;
    }

    // Ajouter un supplément en fonction du nombre d'accidents
    if (accidents > 1) {
        prime *= 1.30;
    }

    // Afficher la prime finale
    printf("La prime d'assurance est : %.2f euros\n", prime);

    return 0;
}
