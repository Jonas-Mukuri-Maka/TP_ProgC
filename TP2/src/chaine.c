#include <stdio.h>

int main() {
    char chaine1[100];
    char chaine2[100];
    char copie[100];
    char concat[200];

    // Saisie des chaînes (scanf ne lit pas les espaces)
    printf("Entrez la première chaîne (sans espaces) : ");
    scanf("%99s", chaine1);

    printf("Entrez la deuxième chaîne (sans espaces) : ");
    scanf("%99s", chaine2);

    // Calcul de len des chaines concernées
    int len1 = 0;
    while (chaine1[len1] != '\0') {
        len1++;
    }
    int len2 = 0;
    while (chaine2[len2] != '\0') {
        len2++;
    }

    // Copie de la premiere chaine en parcourant caracter par caracter
    int i = 0;
    while (i < len1) {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';

    // Concaténation des deux chaines dans concat[]
    int j = 0;

    // Copie de premiere
    for (i = 0; i < len1; i++) {
        concat[j] = chaine1[i];
        j++;
    }

    // Ajout de la deuxieme chaine
    for (i = 0; i < len2; i++) {
        concat[j] = chaine2[i];
        j++;
    }
    concat[j] = '\0';

    // Affichage des infos
    printf("\nLongueur de la première chaîne : %d\n", len1);
    printf("Longueur de la deuxième chaîne : %d\n", len2);
    printf("Copie manuelle de la première chaîne : %s\n", copie);
    printf("Concaténation des deux chaînes : %s\n", concat);

    return 0;
}
