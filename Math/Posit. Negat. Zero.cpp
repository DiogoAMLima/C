#include <stdio.h>
#include <locale.h>
    main( )
{
      setlocale(LC_ALL,"");	
      int x;
      printf("Informe um número: ");
      scanf("%i",&x);
      if (x>0)
    {
	printf("\nO valor é: Positivo\n");
     }
      else if (x<0)
     {
	printf("\nO valor é: Negativo\n");
    }
      else
    {
    	printf("\nO valor é: 0\n");	
     }  
}     
