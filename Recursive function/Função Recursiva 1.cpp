#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int fat(int N)
{
	if (N < 2)
	return 1;
	else
    return N*fat(N-1);
}

int main()
{
	int N;
	setlocale(LC_ALL,"");
	printf("Digite um num: ");
	scanf("%d",&N);
	printf("\nO resultado é: %d ",fat(N));
}
