//Challenge 12 : Nombre entier � quatre chiffres en ordre inverse
//�crivez un programme C pour afficher un nombre entier � quatre chiffres dans l'ordre inverse sans utiliser de boucle.
// Par exemple, si le nombre entier est 1234, son inverse est 4321.
#include <stdio.h>

#include <stdio.h>

int main() {
    int nombre, mille, cent, dix, un, inverse;

    // Demander un nombre entier de 4 chiffres � l'utilisateur
    printf("Entrez un nombre entier � quatre chiffres : ");
    scanf("%d", &nombre);

    // Extraire chaque chiffre du nombre
    mille = nombre / 1000;          // R�cup�re le chiffre des milliers
    cent = (nombre / 100) % 10;     // R�cup�re le chiffre des centaines
    dix = (nombre / 10) % 10;       // R�cup�re le chiffre des dizaines
    un = nombre % 10;               // R�cup�re le chiffre des unit�s

    // Former le nombre inverse
    inverse = un * 1000 + dix * 100 + cent * 10 + mille;

    // Afficher le nombre invers�
    printf("L'inverse du nombre est : %d\n", inverse);

    return 0;
}
