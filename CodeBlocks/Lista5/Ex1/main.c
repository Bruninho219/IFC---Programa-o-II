#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	for(int i=1; i<=100; i++)
    {
        printf("%i\n", i);
    }
    printf("\n\n");
	system("pause");
}
