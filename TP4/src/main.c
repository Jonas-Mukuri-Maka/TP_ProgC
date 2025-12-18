#include <stdio.h>
#include "operator.h"
#include "fichier.h"
int main() {
    
    printf("Choisissez l'exercice a executer:\n");
    printf("1. operateur\n");
    printf("2. fichier\n");
    printf("3. Exercice 4.7 (gestion de fichiers)\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            operateur();
            break;
        case 2:
            fichier();
            break;
        case 3:
            liste();
            break;
        default:
            printf("Choix invalide\n");
}

void operateur() {
    int num1, num2, resultat;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            resultat = somme(num1, num2);
            break;
        case '-':
            resultat = difference(num1, num2);
            break;
        case '*':
            resultat = produit(num1, num2);
            break;
        case '/':
            resultat = quotient(num1, num2);
            break;
        case '%':
            resultat = modulo(num1, num2);
            break;
        case '&':
            resultat = et(num1, num2);
            break;
        case '|':
            resultat = ou(num1, num2);
            break;
        case '~':
            resultat = negation(num1);
            break;
        default:
            printf("Operateur invalide\n");
            return 0;
    }
}

void fichier() {
    int choix;
    char nom_fichier[100];
    char message[256];

    printf("Que souhaitez-vous faire ?\n");
    printf("1. Lire un fichier\n");
    printf("2. Ecrire dans un fichier\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    getchar(); // retire le \n restant dans le buffer

    if (choix == 1) {
        printf("Entrez le nom du fichier a lire : ");
        scanf("%99s", nom_fichier);
        lire_fichier(nom_fichier);
    } 
    else if (choix == 2) {
        printf("Entrez le nom du fichier dans lequel vous souhaitez ecrire : ");
        scanf("%99s", nom_fichier);

        getchar(); // retire le \n
        printf("Entrez le message a ecrire : ");
        fgets(message, 256, stdin);

        ecrire_dans_fichier(nom_fichier, message);
    } 
    else {
        printf("Choix invalide\n");
    }
}

void liste() {
    exit(0);
}
