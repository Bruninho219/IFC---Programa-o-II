#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float valTT=780000, v1=46, v2=32, v3=100-46-32;

    printf("Pr�mio: R$%.2f\n", valTT);
    printf("1� lugar: %.2f\n", valTT/100*v1);
    printf("2� lugar: %.2f\n", valTT/100*v2);
    printf("3� lugar: %.2f\n\n", valTT/100*v3);
}
