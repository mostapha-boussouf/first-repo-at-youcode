//Challenge 5 : Conversion d'Année
//Écrivez un programme C piloté par menu pour convertir une année donnée en :

//Mois
//Jours
//Heures
//Minutes
//Secondes

//Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire). 1 an = 365 jours, 1 mois = 30 jours.

#include <stdio.h>

int main() {
    int annee;
    int mois, jours, heures, minutes, secondes;

    // Saisie de l'année
    printf("Entrez le nombre d'années : ");
    scanf("%d", &annee);

    // Calculs
    mois = annee * 12;
    jours = annee * 365;
    heures = jours * 24;
    minutes = heures * 60;
    secondes = minutes * 60;

    // Affichage des résultats
    printf("%d année(s) = %d mois\n", annee, mois);
    printf("%d année(s) = %d jours\n", annee, jours);
    printf("%d année(s) = %d heures\n", annee, heures);
    printf("%d année(s) = %d minutes\n", annee, minutes);
    printf("%d année(s) = %d secondes\n", annee, secondes);

    return 0;
}
