#include <stdio.h>

int main() {
    int compteur = 5;

    for (int i = 1; i <= compteur; i++) {

        for (int j = 1; j <= i; j++) {

            // Lignes 1 et 2 : que des étoiles
            if (i == 1 || i == 2) {
                printf("* ");
            }
            // Lignes 3 et 4 : # au milieu, * au début et à la fin
            else if ((i == 3 || i == 4)) {
                if (j == 1 || j == i)
                    printf("* ");
                else
                    printf("# ");
            }
            // Ligne 5 : que des étoiles
            else if (i == 5) {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}


