#include <stdio.h>

// Structure pour Couleur RGBA a 4 octet
struct Couleur {
    unsigned char r;   // Rouge
    unsigned char g;   // Vert
    unsigned char b;   // Bleu
    unsigned char a;   // Alpha (opacité)
};

int main() {
    // Tableau de 10 couleurs
    struct Couleur couleurs[10];

    // Initialisation en hexadécimal
    couleurs[0] = (struct Couleur){0xef, 0x78, 0x12, 0xff};
    couleurs[1] = (struct Couleur){0x2c, 0xc8, 0x64, 0xff};
    couleurs[2] = (struct Couleur){0xaa, 0x44, 0xee, 0xff};
    couleurs[3] = (struct Couleur){0x10, 0x20, 0x30, 0xff};
    couleurs[4] = (struct Couleur){0xff, 0x00, 0x00, 0xff};
    couleurs[5] = (struct Couleur){0x00, 0xff, 0x00, 0xff};
    couleurs[6] = (struct Couleur){0x00, 0x00, 0xff, 0xff};
    couleurs[7] = (struct Couleur){0x99, 0x55, 0x22, 0xff};
    couleurs[8] = (struct Couleur){0x33, 0x66, 0x99, 0xff};
    couleurs[9] = (struct Couleur){0x12, 0x34, 0x56, 0xff};

    // Affichage de liste
    printf("Liste des Couleurs RGBA :\n\n");

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge      : %d\n", couleurs[i].r);
        printf("Vert       : %d\n", couleurs[i].g);
        printf("Bleu       : %d\n", couleurs[i].b);
        printf("Alpha      : %d\n\n", couleurs[i].a);
    }

    return 0;
}
