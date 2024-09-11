//Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
//Écrivez un programme C pour afficher un nombre entier à quatre chiffres dans l'ordre inverse sans utiliser de boucle.
// Par exemple, si le nombre entier est 1234, son inverse est 4321.
#include <stdio.h>

#include <stdio.h>

int main() {
    int nombre, mille, cent, dix, un, inverse;

    // Demander un nombre entier de 4 chiffres à l'utilisateur
    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d", &nombre);

    // Extraire chaque chiffre du nombre
    mille = nombre / 1000;          // Récupère le chiffre des milliers
    cent = (nombre / 100) % 10;     // Récupère le chiffre des centaines
    dix = (nombre / 10) % 10;       // Récupère le chiffre des dizaines
    un = nombre % 10;               // Récupère le chiffre des unités

    // Former le nombre inverse
    inverse = un * 1000 + dix * 100 + cent * 10 + mille;

    // Afficher le nombre inversé
    printf("L'inverse du nombre est : %d\n", inverse);

    return 0;
}
