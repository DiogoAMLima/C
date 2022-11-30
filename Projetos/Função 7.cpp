#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maior(int x,int y)
{
	int a,b,maior1;
	a=x;
	b=y;
	if(a>b)
	maior1=a;
	else if(b>a)
	maior1=b;
	return maior1;
}
int main()
{
	int a,b,maior1;
	setlocale(LC_ALL,"");
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	printf("\nDigite o valor de b: ");
	scanf("%d",&b);
	printf("\nO maior valor é: %d",maior(a,b));
}
