#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float valTT=780000, v1=46, v2=32, v3=100-46-32;

    printf("Prêmio: R$%.2f\n", valTT);
    printf("1º lugar: %.2f\n", valTT/100*v1);
    printf("2º lugar: %.2f\n", valTT/100*v2);
    printf("3º lugar: %.2f\n\n", valTT/100*v3);
}
