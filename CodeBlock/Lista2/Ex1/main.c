#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Informe um n�mero inteiro:\n");
    scanf("%d", &num);

    printf("N�mero antecessor: %d\n", num - 1);
    printf("N�mero sucessor: %d\n\n", num + 1);
}
