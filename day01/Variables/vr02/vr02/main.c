//Challenge 2 : Conversion de la temp�rature
//�crivez un programme qui demande la temp�rature en Celsius et la transforme en Kelvin. Formule :
//K = C + 273.15

#include <stdio.h>

int main() {
    float celsius, kelvin;

    // Demande � l'utilisateur de saisir la temp�rature en Celsius
    printf("Entrez la temp�rature en Celsius : ");
    scanf("%f", &celsius);

    // Convertit la temp�rature en Kelvin
    kelvin = celsius + 273.15;

    // Affiche la temp�rature en Kelvin
    printf("La temp�rature en Kelvin est : %.2f\n", kelvin);

    return 0;
}
