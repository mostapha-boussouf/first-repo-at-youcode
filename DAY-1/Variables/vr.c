#include <stdio.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe[10];
    char email[50];

    // Saisie des informations personnelles
    printf("Entrez votre nom : ");
    fgets(nom, sizeof(nom), stdin);

    printf("Entrez votre prénom : ");
    fgets(prenom, sizeof(prenom), stdin);

    printf("Entrez votre age : ");
    scanf("%d", &age);
    getchar(); // Pour consommer le caractère '\n' laissé par scanf

    printf("Entrez votre sexe : ");
    fgets(sexe, sizeof(sexe), stdin);

    printf("Entrez votre adresse email : ");
    fgets(email, sizeof(email), stdin);

    // Affichage des informations personnelles
    printf("\n=== Informations personnelles ===\n");
    printf("Nom : %s", nom);
    printf("Prénom : %s", prenom);
    printf("Age : %d\n", age);
    printf("Sexe : %s", sexe);
    printf("Email : %s", email);

    return 0;
}
