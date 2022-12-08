#include <stdio.h>
#include <locale.h>

    main( )
{
	setlocale(LC_ALL,"");
	int x;
	printf("Informe um número: ");
	scanf("%i",&x);
	printf("\nO número digitado foi: %i\n",x);
	if (x%2==0)
{
	printf("\nO valor digitado é: PAR\n");
	
}
	else
{
	printf("\nO valor digitado é: ÍMPAR\n");
}  
	
}    
    
