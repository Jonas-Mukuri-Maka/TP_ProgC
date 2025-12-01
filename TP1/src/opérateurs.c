#include <stdio.h>

int main() {
  int a = 16;
  int b = 3;

  // Operations aritmetiques
  int Addition = a + b;
  int Substraction = a - b;
  int Multiplication = a * b;
  int Division = a / b;
  int Modulo = a % b;

  // Operations aritmetiques
  int Egal = (a == b);
  int Superieur = (a > b);

  // Affichage des résultats
  printf("a = %d, b = %d\n\n", a, b);

  printf("Addition (a + b) = %d\n", addition);
  printf("Substraction (a - b) = %d\n", Substraction);
  printf("Multiplication (a * b) = %d\n", Multiplication);
  printf("Division (a / b) = %d\n", Division);
  printf("Modulo (a %% b) = %d\n\n", Modulo);

  printf("a == b ? %d\n", Egal);            // 0 = faux, 1 = vrai
  printf("a > b ? %d\n", Superieur);        // 0 = faux, 1 = vrai
  
  return 0;
}
