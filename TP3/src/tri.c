#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int Liste[100];

   
    srand(time(NULL));

    // Remplissage de Liste entre -100 et 100
    for (int i = 0; i < 100; i++) {
        Liste[i] = (rand() % 201) - 100;
    }

    // Affichage de la Liste non trié
    printf("Tableau non trié :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", Liste[i]);
    }
    printf("\n\n");

    // Tri à bulles
		int temp;
    for (int i = 0; i < 100 - 1; i++) {
        for (int j = 0; j < 100 - i - 1; j++) {
            if (Liste[j] > Liste[j + 1]) {
                temp = Liste[j];
                Liste[j] = Liste[j + 1];
                Liste[j + 1] = temp;
            }
        }
    }

    // Affichage de la Liste trié
    printf("Tableau trié par ordre croissant :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", Liste[i]);
    }
    printf("\n");

    return 0;
}
