#include <stdio.h>

int main() {
    int d = 0x10001000;

    // Indices des bits à tester (en partant de la gauche)
    int indexBit4 = 31 - 3;   // 4ème bit → index 28
    int indexBit20 = 31 - 19; // 20ème bit → index 12

    // Extraction
    int bit4 = (d >> indexBit4) & 1;
    int bit20 = (d >> indexBit20) & 1;

    // Vérification : les deux doivent être à 1
    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}
