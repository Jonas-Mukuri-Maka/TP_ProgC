#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[50];
    float note_progC;
    float note_sys;
};

int main() {
    struct Etudiant etudiant[5];

    // Initialisation avec strcpy
    strcpy(etudiant[0].nom, "Durant");
    strcpy(etudiant[0].prenom, "Cristy");
    strcpy(etudiant[0].adresse, "12 Rue Robert Vivier");
    etudiant[0].note_progC = 14.5;
    etudiant[0].note_sys   = 13.0;

    strcpy(etudiant[1].nom, "Martin");
    strcpy(etudiant[1].prenom, "Lucas");
    strcpy(etudiant[1].adresse, "5 Avenue Victor Hugo");
    etudiant[1].note_progC = 12.0;
    etudiant[1].note_sys   = 10.5;

    strcpy(etudiant[2].nom, "Dupuis");
    strcpy(etudiant[2].prenom, "Cory");
    strcpy(etudiant[2].adresse, "8 Boulevard Gambetta");
    etudiant[2].note_progC = 16.5;
    etudiant[2].note_sys   = 17.0;

    strcpy(etudiant[3].nom, "Kern");
    strcpy(etudiant[3].prenom, "Thien");
    strcpy(etudiant[3].adresse, "22 Rue de Lyon");
    etudiant[3].note_progC = 11.0;
    etudiant[3].note_sys   = 12.5;

    strcpy(etudiant[4].nom, "Dolph");
    strcpy(etudiant[4].prenom, "Emma");
    strcpy(etudiant[4].adresse, "3 Impasse des Lilas");
    etudiant[4].note_progC = 18.0;
    etudiant[4].note_sys   = 15.0;

    // Affichage
    printf("LISTE DES ETUDIANT.E.S :\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom          : %s\n", etudiant[i].nom);
        printf("Prénom       : %s\n", etudiant[i].prenom);
        printf("Adresse      : %s\n", etudiant[i].adresse);
        printf("Note Prog C  : %.2f\n", etudiant[i].note_progC);
        printf("Note Système : %.2f\n", etudiant[i].note_sys);
        printf("\n");
    }

    return 0;
}
