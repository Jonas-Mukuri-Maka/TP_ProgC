#include <stdio.h>

#define MaxLigne 512
#define MaxPhrase 128

int main(int argc, char *argv[])
{
    FILE *fichier;
    char phrase[MaxPhrase];
    char ligne[MaxLigne];
    int num_ligne = 0;

    if (argc < 2) {
        printf("Usage : %s nom_du_fichier\n", argv[0]);
        return 1;
    }

    // recuperation de nom du fichier
    char *nom_fichier = argv[1];

    // la phrase à rechercher
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    getchar(); // enlever le \n restant
    fgets(phrase, MaxPhrase, stdin);

    // enlever le \n final de la phrase
    for (int i = 0; phrase[i] != '\0'; i++) {
        if (phrase[i] == '\n') {
            phrase[i] = '\0';
            break;
        }
    }

    // ouverture du fichier en lecture
    fichier = fopen(nom_fichier, "r");
    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_fichier);
        return 1;
    }

    printf("\nRésultats de la recherche :\n");

    // lecture du fichier ligne par ligne
    while (fgets(ligne, MaxLigne, fichier) != NULL) {
        int count = 0; // nombre d'occurrences dans la ligne
        num_ligne++;

        // recherche de la phrase dans la ligne
        for (int i = 0; ligne[i] != '\0'; i++) {
            int j = 0;
            // comparaison par caractère
            while (ligne[i + j] == phrase[j] && phrase[j] != '\0') {
                j++;
            }
            if (phrase[j] == '\0') {
                count++;
            }
        }

        if (count > 0) {
            printf("Ligne %d, %d fois\n", num_ligne, count);
        }
      return 0;
    }

    // fermeture du fichier
    fclose(fichier);

    return 0;
}
