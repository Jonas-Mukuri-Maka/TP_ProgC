#include <stdio.h>

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

typedef struct {
    Couleur c;
    int count;
} CouleurCount;

int meme_couleur(Couleur c1, Couleur c2) {
    return c1.r == c2.r && c1.g == c2.g &&
           c1.b == c2.b && c1.a == c2.a;
}

int main() {
    Couleur couleurs[100];
    CouleurCount distinctes[100];
    int nbDistinctes = 0;

    // exemple simple de remplissage
    couleurs[0] = (Couleur){0xff, 0x23, 0x23, 0x45};
    couleurs[1] = (Couleur){0xff, 0x00, 0x23, 0x12};
    couleurs[2] = (Couleur){0xff, 0x23, 0x23, 0x45};

    for (int i = 3; i < 100; i++) {
        couleurs[i] = couleurs[i % 3];
    }

    for (int i = 0; i < 100; i++) {
        int trouve = 0;

        for (int j = 0; j < nbDistinctes; j++) {
            if (meme_couleur(couleurs[i], distinctes[j].c)) {
                distinctes[j].count++;
                trouve = 1;
                break;
            }
        }

        if (!trouve) {
            distinctes[nbDistinctes].c = couleurs[i];
            distinctes[nbDistinctes].count = 1;
            nbDistinctes++;
        }
    }

    for (int i = 0; i < nbDistinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].c.r,
               distinctes[i].c.g,
               distinctes[i].c.b,
               distinctes[i].c.a,
               distinctes[i].count);
    }

    return 0;
}
