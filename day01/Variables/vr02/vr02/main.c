//Challenge 2 : Conversion de la température
//Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :
//K = C + 273.15

#include <stdio.h>

int main() {
    float celsius, kelvin;

    // Demande à l'utilisateur de saisir la température en Celsius
    printf("Entrez la température en Celsius : ");
    scanf("%f", &celsius);

    // Convertit la température en Kelvin
    kelvin = celsius + 273.15;

    // Affiche la température en Kelvin
    printf("La température en Kelvin est : %.2f\n", kelvin);

    return 0;
}
