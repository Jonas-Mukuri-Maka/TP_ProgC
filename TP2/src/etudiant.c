#include <stdio.h>

int main() {
    // Tableaux pour les informations
    char noms[5][30] = {
        "Durant", "Martin", "Dupuis", "Kern", "Dolph"
    };

    char prenoms[5][30] = {
        "Cristy", "Lucas", "Cory", "Thien", "Emma"
    };
    char adresses[5][50] = {
        "12 Rue Robert Vivier",
        "5 Avenue Victor Hugo",
        "8 Boulevard Gambetta",
        "22 Rue de Lyon",
        "3 Impasse des Lilas"
    };

    // Notes dans les modules
    float note_progC[5] = {14.5, 12.0, 16.5, 11.0, 18.0};
    float note_sys[5]   = {13.0, 10.5, 17.0, 12.5, 15.0};

    // Affichage des données
    printf("LISTE DES ETUDIANT.E.S : \n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom         : %s\n", noms[i]);
        printf("Prénom      : %s\n", prenoms[i]);
        printf("Adresse     : %s\n", adresses[i]);
        printf("Note Prog C : %.2f\n", note_progC[i]);
        printf("Note Système: %.2f\n", note_sys[i]);
        printf("\n");
    }

    return 0;
}
