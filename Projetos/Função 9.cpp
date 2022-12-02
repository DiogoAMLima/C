#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int segds(int x,int y,int z)
{
 int H,M,S,convers;
 H=x;
 M=y;
 S=z;
 convers=(H,M,S);
 return convers;
}
int main()
{
	int H,M,S;
	setlocale(LC_ALL,"");
	printf("Digite a quantidade de horas: ");
	scanf("%d",&H);
	printf("Digite a quantidade de minutos: ");
	scanf("%d",&M);
	printf("Digite a quantidade de segundos: ");
	scanf("%d",&S);
	H=H*3600;
    M=M*60;
	printf("\nA quantidade de segundos em horas, %d , a quantidade de segundos em minutos %d e a quantidade de segundos %d",H,M,S,segds(H,M,S));
}
