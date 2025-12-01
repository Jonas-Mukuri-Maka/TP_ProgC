#include <stdio.h>

int main() {
  int a = 2;
  int b = 3;
  int resultat;
  // Si b est égale a 0, le resultat est toujours 1
  if (b == 0)
  {
    resultat = 1;
  }
  // Si a est égale a 0, le resultat ne peut que etre 0 (sauf pour 0^^0)
  else if (a == 0)
  {
    resultat = 0;
  }
  else
  {
    // Boucle pour multiplier a par lui meme b fois
    resultat = 1;
    for (int i = 1; i <= b; i++) 
    {
      resultat = resultat * a;
    }
  }
  printf("a^b = %d\n", resultat);
}

