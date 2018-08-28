#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade, ano;

    printf("Informe a sua idade:\n");
    scanf("%d", &idade);
    printf("Informe o ano atual:\n");
    scanf("%d", &ano);

    printf("\nAno de nascimento: %d\n\n", ano-idade);
}
