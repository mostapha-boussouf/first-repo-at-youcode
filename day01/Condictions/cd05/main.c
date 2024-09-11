//Challenge 5 : Conversion d'Ann�e
//�crivez un programme C pilot� par menu pour convertir une ann�e donn�e en :

//Mois
//Jours
//Heures
//Minutes
//Secondes

//Pour plus de simplicit�, n'incluez pas l'ann�e bissextile (sauf si vous �tes courageux pour le faire). 1 an = 365 jours, 1 mois = 30 jours.

#include <stdio.h>

int main() {
    int annee;
    int mois, jours, heures, minutes, secondes;

    // Saisie de l'ann�e
    printf("Entrez le nombre d'ann�es : ");
    scanf("%d", &annee);

    // Calculs
    mois = annee * 12;
    jours = annee * 365;
    heures = jours * 24;
    minutes = heures * 60;
    secondes = minutes * 60;

    // Affichage des r�sultats
    printf("%d ann�e(s) = %d mois\n", annee, mois);
    printf("%d ann�e(s) = %d jours\n", annee, jours);
    printf("%d ann�e(s) = %d heures\n", annee, heures);
    printf("%d ann�e(s) = %d minutes\n", annee, minutes);
    printf("%d ann�e(s) = %d secondes\n", annee, secondes);

    return 0;
}
