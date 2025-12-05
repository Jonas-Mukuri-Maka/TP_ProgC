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

    // Demande à l'utilisateur l'entier à chercher
    int numCherche;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &numCherche);

    // Parcours de la liste pour trouver l'entier et affiche présent si trouvé
    for (int i = 0; i < 100; i++) {
        if (Liste[i] == numCherche) {
            printf("Résultat : entier présent\n");
            return 0;
        }
    }
    printf("Résultat : entier absent\n");
    return 0;
}


