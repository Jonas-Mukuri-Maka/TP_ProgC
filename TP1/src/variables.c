#include <stdio.h>

int main() {
    // Types caractères
    char c = 'A';                     // caractère simple
    signed char sc = -10;             // char signé
    unsigned char uc = 250;           // char non-signé

    // Types short
    short s = -1234;                  // short signé
    signed short ss = -32000;         // short signé (notation explicite)
    unsigned short us = 65000;        // short non-signé

    // Types int
    int i = -100000;                  // int signé
    signed int si = -200000;          // int signé (notation explicite)
    unsigned int ui = 4000000000U;    // int non-signé

    // Types long
    long int li = -123456789L;        // long signé
    signed long int sli = -987654321L;// long signé (notation explicite)
    unsigned long int uli = 3000000000UL; // long non-signé

    // Types long long
    long long int lli = -123456789012345LL;        // long long signé
    signed long long int slli = -999999999999999LL;// long long signé explicite
    unsigned long long int ulli = 18446744073709551615ULL; // long long non-signé

    // Types flottants
    float f = 3.14f;                 // nombre réel simple précision
    double d = 2.718281828;          // nombre réel double précision
    long double ld = 1.618033988749895L; // nombre réel très grande précision

    // Affichage des valeurs
    printf("char = %c\n", c);
    printf("signed char = %d\n", sc);
    printf("unsigned char = %u\n", uc);

    printf("short = %d\n", s);
    printf("signed short = %d\n", ss);
    printf("unsigned short = %u\n", us);

    printf("int = %d\n", i);
    printf("signed int = %d\n", si);
    printf("unsigned int = %u\n", ui);

    printf("long int = %ld\n", li);
    printf("signed long int = %ld\n", sli);
    printf("unsigned long int = %lu\n", uli);

    printf("long long int = %lld\n", lli);
    printf("signed long long int = %lld\n", slli);
    printf("unsigned long long int = %llu\n", ulli);

    printf("float = %f\n", f);
    printf("double = %lf\n", d);
    printf("long double = %Lf\n", ld);

    return 0;
}
