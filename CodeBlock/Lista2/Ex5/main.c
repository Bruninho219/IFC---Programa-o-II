#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float velKm;

    printf("Informe a sua velocidade (Km:h)\n");
    scanf("%f", &velKm);

    printf("Velocidade em m:s: %.2f\n\n", velKm/3.6);
}
