#include <stdio.h>

int main() {
    float consommation, tarif, facture;
    int type_utilisateur, type_contrat;

    // Saisie des informations
    printf("Entrez la consommation d'electricite (en kWh) : ");
    scanf("%f", &consommation);
    printf("Entrez le type d'utilisateur (1 pour residentiel, 2 pour commercial) : ");
    scanf("%d", &type_utilisateur);
    printf("Entrez le type de contrat (0 pour standard, 1 pour reduit) : ");
    scanf("%d", &type_contrat);

    // Déterminer le tarif en fonction du type d'utilisateur et du type de contrat
    if (type_utilisateur == 1) { // Résidentiel
        if (type_contrat == 0) {
            tarif = 0.20; // Contrat standard
        } else {
            tarif = 0.15; // Contrat réduit
        }
    } else if (type_utilisateur == 2) { // Commercial
        if (type_contrat == 0) {
            tarif = 0.30; // Contrat standard
        } else {
            tarif = 0.25; // Contrat réduit
        }
    } else {
        printf("Type d'utilisateur invalide.\n");
        return 1;
    }

    // Calcul de la facture de base
    facture = consommation * tarif;

    // Ajout d'un supplément si la consommation dépasse 500 kWh
    if (consommation > 500) {
        facture += facture * 0.10; // Ajout de 10%
    }

    // Affichage du résultat
    printf("La facture d'electricite est : %.2f euros\n", facture);

    return 0;
}
