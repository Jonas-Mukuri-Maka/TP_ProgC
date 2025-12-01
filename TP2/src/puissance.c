#include <stdio.h>
#include <math.h>

int main() {
  int a = 2;
  int b = 3;

  int resultat;

  if (a == 0)
  {
    resultat = 0;
  }
  else if (b == 0)
  {
    resultat = 0;
  }
  else{
    for (int i = 1; i <= b; i++) 
    {
    resultat = resultat * a;
    }
  }

  printf("a^b = ", resultat);
}
