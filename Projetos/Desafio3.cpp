#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int cont=0,num,resposta;
	do
	{
	    system("cls");
	    setlocale(LC_ALL,"");
	    printf("-----Tabuada-----\n\n");
	    printf("Informe um número: ");
	    scanf("%d",&num);
	    for(cont=0;cont<=10;cont++)
	{
	    printf("\n%d x %d = %d\n",num,cont,num*cont);
	}
	printf("\nDigite 1 para sair ou qualquer outro número para fazer um novo cálculo: ");
	scanf("%d",&resposta);
	}while(resposta != 1);
	return 0;
}
