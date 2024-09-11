//Challenge 12 : Comparaison d'Instants
//�crivez un programme C qui lit deux instants dans le format HH:MM:SS et affiche un des messages suivants :

//Le premier instant vient avant le deuxi�me ;
//Le deuxi�me instant vient avant le premier ;
//Il s'agit du m�me instant.

#include <stdio.h>

int main() {
    int h1, m1, s1; // Heure, minute, seconde du premier instant
    int h2, m2, s2; // Heure, minute, seconde du deuxi�me instant

    // Lire les deux instants
    printf("Entrez le premier instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Entrez le deuxi�me instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    // Comparer les instants
    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("Le premier instant vient avant le deuxi�me.\n");
    } else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("Le deuxi�me instant vient avant le premier.\n");
    } else {
        printf("Il s'agit du m�me instant.\n");
    }

    return 0;
}
