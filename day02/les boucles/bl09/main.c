#include <stdio.h>

int main() {
    int n, compteur = 0;

    // Demande � l'utilisateur de saisir un entier positif
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    // Si l'utilisateur entre 0, le programme consid�re qu'il y a un chiffre
    if (n == 0) {
        compteur = 1;
    } else {
        // Tant que n n'est pas �gal � 0, on divise par 10 et on incr�mente le compteur
        while (n != 0) {
            n /= 10;  // Divise n par 10 � chaque it�ration
            compteur++;  // Incr�mente le compteur
        }
    }

    // Affiche le nombre de chiffres
    printf("Nombre de chiffres = %d\n", compteur);

    return 0;
}
