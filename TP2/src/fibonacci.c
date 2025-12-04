#include <stdio.h>

int main() {
    int n;

    // Saisie un numéro
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);


    // U0 et U1
    int U0 = 0;
    int U1 = 1;

    // Affichage selon la valeur de n
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    // Affiche U0 et U1; commence tout le temps par ces nombres
    printf("%d, %d", U0, U1); 

    // Boucle pour générer la suite jusqu'à n
    for (int i = 2; i < n; i++) {
        int Un = U0 + U1; 
        printf(", %d", Un);

        // Replacement de nombre pour recurence suivante
        U0 = U1;
        U1 = Un;
    }

    printf("\n");
    return 0;
}
