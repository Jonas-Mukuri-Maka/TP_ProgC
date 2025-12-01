#include <stdio.h>

int main() {
    printf("Entrer un nombre entier: ");
    printf("\n");
    int n;
    scanf("%d", &n);
    int i, j;
    // Boucle pour chaque niveau de la pyramide
    for (i = 1; i <= n; i++) {
        // Affiche les espaces avant les nombres pour centrer la ligne
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Affiche les nombres croissants de 1 jusqu'à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Affiche les nombres décroissants de i-1 jusqu'à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        // Passe à la ligne suivante après chaque niveau
        printf("\n");
    }

    // Message de terminaison de la pyramide
    printf("Generation de la pyramide terminee.\n");
    return 0;
}
