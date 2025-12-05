#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int Liste[100];

    srand(time(NULL));

    // Remplissage du Liste avec des valeurs croissantes avec chaque élément > précédent
    for (int i = 1; i < 100; i++) {
        Liste[i] = Liste[i - 1] + (rand() % 10 + 1);
    }

    // Affichage du Liste trié
    printf("Tableau trié :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", Liste[i]);
    }
    printf("\n\n");

    // Saisie de l'entier à rechercher
    int numCherche;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &numCherche);

    // Recherche dichotomique
    int debut = 0, fin = 100 - 1;
    while (debut <= fin) {
        int milieu = (debut + fin) / 2;
        if (Liste[milieu] == numCherche) {
            printf("Résultat : entier présent\n");
            return 0;
        } else if (Liste[milieu] < numCherche) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    printf("Résultat : entier absent\n");
    return 0;
}

