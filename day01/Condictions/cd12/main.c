#include <stdio.h>

int main() {
    int h1, m1, s1; // Heure, minute, seconde du premier instant
    int h2, m2, s2; // Heure, minute, seconde du deuxième instant

    // Lire les deux instants
    printf("Entrez le premier instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Entrez le deuxième instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    // Comparer les instants
    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("Le premier instant vient avant le deuxième.\n");
    } else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("Le deuxième instant vient avant le premier.\n");
    } else {
        printf("Il s'agit du même instant.\n");
    }

    return 0;
}
