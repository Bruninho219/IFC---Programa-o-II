#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    const float PI = 3.141592;

    setlocale(LC_ALL, "Portuguese");
    float raio;

    printf("Informe o valor do raio (m):\n");
    scanf("%f", &raio);

    printf("Área do círculo: %.2f m²\n\n", PI*raio*raio);
}
