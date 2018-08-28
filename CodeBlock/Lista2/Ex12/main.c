#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    const float PI = 3.141592;

    setlocale(LC_ALL, "Portuguese");
    float raio, h;

    printf("Informe o valor da altura (m):\n");
    scanf("%f", &h);
    printf("Informe o valor do raio (m):\n");
    scanf("%f", &raio);

    printf("Área do círculo: %.2f m³\n\n", PI*raio*raio*h);
}
