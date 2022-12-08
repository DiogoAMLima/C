#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int alg(int x,int y, int z)
{
	int aux,num,soma,alg1;
	aux=x;
	num=y;
	soma=z;
	return alg1;
}

int main()
{
	int num,aux,soma=0;
	setlocale(LC_ALL,"");
	printf("Informe um número: ");
	scanf("%d",&num);
	if(num>0)
	{
	aux=num;
	while(aux>0)
	{
	soma+=aux%10;
	aux/=10;
	}
}
	else
	printf("Número inválido");
	printf("\nSoma dos algarismos de %d = %d\n",num,soma,alg(num,aux,soma));
}
