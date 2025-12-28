#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[])
{
    char op;
    int num1, num2, resultat;

    //Si le nombre d'argument n'est pas respecter
    if (argc < 3) {
        printf("Utilisation : ./calcule operateur num1 num2\n");
        return 1;
    }

    op = argv[1][0];
    num1 = atoi(argv[2]);

    if (op != '~') {
        if (argc < 4) {
            printf("Il faut deux nombres\n");
            return 1;
        }
        num2 = atoi(argv[3]);
    }

    // tout opérateurs utilisables
    switch (op) {
        case '+':
            resultat = somme(num1, num2);
            break;
        case '-':
            resultat = difference(num1, num2);
            break;
        case '*':
            resultat = produit(num1, num2);
            break;
        case '/':
            resultat = quotient(num1, num2);
            break;
        case '%':
            resultat = modulo(num1, num2);
            break;
        case '&':
            resultat = et_op(num1, num2);
            break;
        case '|':
            resultat = ou_op(num1, num2);
            break;
        case '~':
            resultat = negation(num1);
            break;
        default:
            printf("Opérateur inconnu\n");
            return 1;
    }

    printf("Résultat : %d\n", resultat);
    return 0;
}
