#include <stdio.h>

int main() {
    float revenu;       // Revenu annuel
    int score_credit;   // Score de cr�dit
    int duree_pret;     // Dur�e du pr�t en ann�es

    // Lire les informations du pr�t
    printf("Revenu annuel (en euros) : ");
    scanf("%f", &revenu);
    printf("Score de cr�dit (sur 1000) : ");
    scanf("%d", &score_credit);
    printf("Dur�e du pr�t (en ann�es) : ");
    scanf("%d", &duree_pret);

    // V�rifier l'�ligibilit�
    if (revenu >= 30000 && score_credit >= 700 && duree_pret <= 10) {
        printf("�ligible pour le pr�t.\n");
    } else if (revenu >= 30000 && score_credit >= 650 && duree_pret <= 15) {
        printf("�ligible avec conditions.\n");
    } else {
        printf("Non �ligible pour le pr�t.\n");
    }

    return 0;
}
