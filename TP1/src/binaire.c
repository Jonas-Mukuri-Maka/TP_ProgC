#include <stdio.h>

// Fonction pour afficher un nombre en binaire
void afficherBinaire(unsigned int n) {
    int i;
    int debut = 0; // pour savoir quand commencer à afficher

    // On regarde tous les bits du plus grand au plus petit
    for (i = 31; i >= 0; i--) {
        unsigned int bit = (n >> i) & 1; // prend le bit i
        if (bit) debut = 1; // si on voit un 1, on commence à afficher
        if (debut)
            printf("%u", bit); // affiche le bit
    }
    // si le nombre est 0, on n'a rien affiché, donc on met 0
    if (!debut)
        printf("0");

    printf("\n"); // passe à la ligne après le nombre
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024}; // les nombres à tester
    int taille = sizeof(nombres) / sizeof(nombres[0]); // nombre de nombres

    for (int i = 0; i < taille; i++) {
        printf("%u en binaire = ", nombres[i]);
        afficherBinaire(nombres[i]); // on appelle la fonction
    }

    return 0;
}
