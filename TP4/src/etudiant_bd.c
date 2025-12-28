#include <stdio.h>
#include <string.h>
#include "fichier.h"

#define NB_ETUDIANTS 5

typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    int note1;
    int note2;
} Etudiant;

void exercice_etudiant_bd() {
    Etudiant etudiants[NB_ETUDIANTS];
    char ligne[256];
    char nom_fichier[] = "etudiant.txt";

    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("\nEntrez les details de l'etudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf("%49s", etudiants[i].nom);

        printf("Prenom : ");
        scanf("%49s", etudiants[i].prenom);

        getchar();
        printf("Adresse : ");
        fgets(etudiants[i].adresse, 100, stdin);
        
        etudiants[i].adresse[strcspn(etudiants[i].adresse, "\n")] = '\0';

        printf("Note 1 : ");
        scanf("%d", &etudiants[i].note1);

        printf("Note 2 : ");
        scanf("%d", &etudiants[i].note2);
    }

    // code pour ecrire les etudiants sur le fichier
    for (int i = 0; i < NB_ETUDIANTS; i++) {
        sprintf(ligne, "%s %s, %s, %d, %d\n",
                etudiants[i].nom,
                etudiants[i].prenom,
                etudiants[i].adresse,
                etudiants[i].note1,
                etudiants[i].note2);
        ecrire_dans_fichier(nom_fichier, ligne); // utilise la fonction de fichier.h
    }

    printf("\nLes details des etudiants ont ete enregistres dans %s.\n", nom_fichier);
}

