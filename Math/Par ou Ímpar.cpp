#include <stdio.h>
#include <locale.h>

    main( )
{
	setlocale(LC_ALL,"");
	int x;
	printf("Informe um n�mero: ");
	scanf("%i",&x);
	printf("\nO n�mero digitado foi: %i\n",x);
	if (x%2==0)
{
	printf("\nO valor digitado �: PAR\n");
	
}
	else
{
	printf("\nO valor digitado �: �MPAR\n");
}  
	
}    
    
