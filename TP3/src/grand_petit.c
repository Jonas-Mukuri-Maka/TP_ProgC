#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  int Min;
  int Max;
  int Liste[100];

  // Function pour que chaque géneration est unique
  srand(time(NULL));

  // Génere une liste avec des numeros entre 1 et 1000
  for (int i = 0; i < 100; i++){
    int num = (rand() % 1000) + 1;
    Liste[i] = num;
  }

  // Intialisation de Max et Min
  Max = Liste[0];
  Min = Liste[0];

  // Parcours chaque élement de table et les compare pour trouver Min et Max
  for (int i = 1; i < 100; i++) {
    if (Liste[i] > Max) {
        Max = Liste[i];
    }
    if (Liste[i] < Min) {
        Min = Liste[i];
    }
  }

  printf("Le numéro le plus grand est : %d\n", Max);
  printf("Le numéro le plus petit est : %d\n", Min);

  return 0;

}
