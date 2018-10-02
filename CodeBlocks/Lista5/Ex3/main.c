#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	for(int i=0; i<=1000; i++)
    {
        if(i % 7==0)
        {
            printf("%i\n", i);
        }
    }

    printf("\n\n");
	system("pause");
}
