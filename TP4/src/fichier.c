#include <stdio.h>
#include "fichier.h"

void lire_fichier(const char *nom_de_fichier) {
    FILE *f = fopen(nom_de_fichier, "r");
    char c;

    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier\n");
        return;
    }

    printf("Contenu du fichier %s :\n", nom_de_fichier);

    while ((c = fgetc(f)) != EOF) {
        printf("%c", c);
    }

    printf("\n");
    fclose(f);
}

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    FILE *f = fopen(nom_de_fichier, "w");

    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier\n");
        return;
    }

    fputs(message, f);
    fclose(f);

    printf("Le message a ete ecrit dans le fichier %s.\n", nom_de_fichier);
}
