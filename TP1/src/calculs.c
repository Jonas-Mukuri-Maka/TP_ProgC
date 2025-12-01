#include <stdio.h>

int main() {
  int num1, num2;
  char op;
  int resultat;

   // Saisie de num1
   printf("Entrez le premier entier (num1) : ");
   scanf("%d", &num1);

   // Saisie de num2
   printf("Entrez le second entier (num2) : ");
   scanf("%d", &num2);

   // Saisie de l'opérateur
   printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
   scanf(" %c", &op);

  // Oprérations
    switch (op) {
      //Addition
        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;
      //Soustraction
        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;
      //Multiplication
        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;
      //Division
        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zero!\n");
            }
            break;
      //Modulo
        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : modulo par zero!\n");
            }
            break;
      //ET
        case '&':
            resultat = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, resultat);
            break;
      //OU
        case '|':
            resultat = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, resultat);
            break;
      
        case '~':
            resultat = ~num1;
            printf("~%d = %d\n", num1, resultat);
            break;
        default:
            printf("Operateur inconnu: %c\n", op);
    }
}


    return 0;
}


