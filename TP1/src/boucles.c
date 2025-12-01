#include <stdio.h>

int main() {
    int compteur = 5;

    if (compteur >= 10) {
        printf("Erreur : compteur doit etre strictement inferieur a 10.\n");
        return 1;
    }

    // Boucle des lignes
    for (int i = 1; i <= compteur; i++) {
        // Boucle des colonnes
        for (int j = 1; j <= i; j++) {
            // Lignes 1, 2 et dernière ligne *
            if (i == 1 || i == 2 || i == compteur) {
                printf("* ");
            }
            // Pour les autres lignes #
            else {
                if (j == 1 || j == i)
                    printf("* ");
                else
                    printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}




