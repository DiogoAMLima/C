#include <stdio.h>
#include <locale.h>
    main( )
{
	  setlocale(LC_ALL,"");	
	  int x;
	  printf("Informe um n�mero: ");
	  scanf("%i",&x);
	  if (x>0)
	{
		printf("\nO valor �: Positivo\n");
	}
	  else if (x<0)
	{
		printf("\nO valor �: Negativo\n");
    }
      else
    {
    	printf("\nO valor �: 0\n");	
	}  
}     

