#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main()
{
    const float PI = 3.141592;

    setlocale(LC_ALL, "Portuguese");
    float a, b, h;

    printf("Informe os valores dos catetos A e B (m):\n");
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);

    printf("Valor da hipotenusa: %.2fm\n\n", sqrt((a*a+b*b)));
}
