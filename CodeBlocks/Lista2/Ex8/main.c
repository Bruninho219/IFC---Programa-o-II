#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float tempC, tempF;

    printf("Informe a temperatura(�C):\n");
    scanf("%f", &tempC);

    printf("Temperatura em �F: %.2f\n\n", tempC*9/5+32.0);
}
