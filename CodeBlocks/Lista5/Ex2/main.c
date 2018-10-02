#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	for(int i=1, j=10; i<=10; i++, j--)
    {
        printf("i: %i\tj: %i\n", i,j);
    }
    printf("\n\n");
	system("pause");
}
