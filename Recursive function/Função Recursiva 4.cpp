#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float fibonacci(int N)
{
	int n;
	n=N;
	if(n == 0)
	return 0;
	else if(n == 1)
	return 1;
	else
	return (fibonacci(n-1)+fibonacci(n-2));
}
	int main()
{
	int fib,i;
	while(1)
{
	setlocale(LC_ALL,"");
	printf("Digite um número para calcular a sequência e mostrar o elemento: ");
	scanf("%d",&fib);
	if(fib>= 0 && fib<50)
	break;
	printf("\nValor inválido. \n");
}
	printf("\n%d elemento da sequência: ",fib);
	for(i=0;i<=fib;i++);
{
	printf("\n\nO elemento %d corresponde ao valor %.0f da sequência de fibonacci\n",fib,fibonacci(fib));
	
}
	return 0;
}

