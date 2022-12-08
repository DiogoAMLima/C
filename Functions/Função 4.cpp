#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int data(int x,int y,int z)
{
	int D,M,A,dataAtual;
	D=x;
	M=y;
	A=z;
	dataAtual=(D,M,A);
	return dataAtual;
}
int main(){
	int D,M,A;
	setlocale(LC_ALL,"");
	printf("Digite o dia: ");
	scanf("%d",&D);
	printf("\nDigite um número de 1 a 12: ");
	scanf("%d",&M);
	switch (M)
	{
		case 1:
			printf("\nJaneiro \n ");
			break;
		case 2:
			printf("\nFevereiro \n ");
	    	break;
	    case 3:
			printf("\nMarço \n ");
			break;
		case 4:
			printf("\nAbril \n ");
			break;
		case 5:
			printf("\nMaio \n ");
			break;
		case 6:
			printf("\nJunho \n ");
			break;
		case 7:
			printf("\nJulho \n ");
			break;					
		case 8:
			printf("\nAgosto \n ");
			break;
		case 9:
			printf("\nSetembro \n ");
			break;
		case 10:
			printf("\nOutubro \n ");
			break;
		case 11:
			printf("\nNovembro \n ");
			break;
		case 12:
			printf("\nDezembro \n ");
			break;
		default:						
			printf("\nOpção default \n");
	}
	printf("\nDigite o ano: ");
	scanf("%d",&A);
	printf("\nData: %d/%d/%d",D,M,A,data(D,M,A));
}
