//Challenge 1 : Affichage Informations
//�crivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, pr�nom, �ge, sexe, et adresse email. Les donn�es sont saisies � partir du clavier.

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

    printf("Entrez votre pr�nom : ");
    fgets(prenom, sizeof(prenom), stdin);

    printf("Entrez votre age : ");
    scanf("%d", &age);
    getchar(); // Pour consommer le caract�re '\n' laiss� par scanf

    printf("Entrez votre sexe : ");
    fgets(sexe, sizeof(sexe), stdin);

    printf("Entrez votre adresse email : ");
    fgets(email, sizeof(email), stdin);

    // Affichage des informations personnelles
    printf("\n=== Informations personnelles ===\n");
    printf("Nom : %s", nom);
    printf("Pr�nom : %s", prenom);
    printf("Age : %d\n", age);
    printf("Sexe : %s", sexe);
    printf("Email : %s", email);

    return 0;
}
