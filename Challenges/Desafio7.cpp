#include <stdio.h>
#include <locale.h>

int soma(int n){
	if(n<0)
	return 0;
	else
	return n+soma(n-1);
}
main()
{
	int num;
	setlocale(LC_ALL,"");
	printf("Digite um número maior que 0: ");
	scanf("%d",&num);
	printf("\nSoma = %d",soma(num));
}
