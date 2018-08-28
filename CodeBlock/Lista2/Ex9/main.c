#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    const float PI = 3.141592;

    setlocale(LC_ALL, "Portuguese");
    float gr;

    printf("Informe o valor lido em graus:\n");
    scanf("%f", &gr);

    printf("Valor em radianos: %.3f\n\n", gr*PI/180.0);
}
