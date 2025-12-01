#include <stdio.h>
#include <string.h>

int main() {
  int somme = 0;

  // Boucle de 1 à 1000
  for (int i = 1; i <= 1000; i++) {
    if (i % 5 == 0 || i % 7 == 0) {
      somme = somme + i;
    }
    if (i % 11 == 0) {
      continue;
    }
    // Arrete la boucle si la somme dépasse 5000
   if (somme > 5000) {
     somme = somme - i;
     break;
    }
  }
  printf("Somme finale = %d\n", somme);
  return 0;
  
}
