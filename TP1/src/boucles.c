#include <stdio.h>

int main() {
  int compteur = 5; 

  if (compteur >= 10) {
      printf("Erreur : compteur doit etre strictement inferieur a 10.\n");
      return 1;
  }

  for (int i = 1; i <= compteur; i++) {
      for (int j = 1; j <= i; j++) {
          if (i == 1)           printf("* ");
          else if (i == 2)      printf("* ");
          else if (i == 3 && j > 1) printf("# ");
          else if (i == 4 && j > 1) printf("# ");
          else if (i == 5)      printf("* ");
          else                  printf("* ");
      }
      printf("\n");
      i++;
  }

  return 0;
}

