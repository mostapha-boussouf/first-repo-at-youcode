#include <stdio.h>

int main() {
    int jour, mois, annee;
    char moisTexte[20];

    // Demander à l'utilisateur de saisir une date au format jj/mm/aaaa
    printf("Entrez une date au format jj/mm/aaaa : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    // Convertir le mois en texte
    switch (mois) {
        case 1:  strcpy(moisTexte, "Janvier"); break;
        case 2:  strcpy(moisTexte, "Février"); break;
        case 3:  strcpy(moisTexte, "Mars"); break;
        case 4:  strcpy(moisTexte, "Avril"); break;
        case 5:  strcpy(moisTexte, "Mai"); break;
        case 6:  strcpy(moisTexte, "Juin"); break;
        case 7:  strcpy(moisTexte, "Juillet"); break;
        case 8:  strcpy(moisTexte, "Aout"); break;
        case 9:  strcpy(moisTexte, "Septembre"); break;
        case 10: strcpy(moisTexte, "Octobre"); break;
        case 11: strcpy(moisTexte, "Novembre"); break;
        case 12: strcpy(moisTexte, "Décembre"); break;
        default: strcpy(moisTexte, "Inconnu"); break;
    }

    // Afficher la date au format jj-Mois-aaaa
    printf("%02d-%s-%d\n", jour, moisTexte, annee);

    return 0;
}
