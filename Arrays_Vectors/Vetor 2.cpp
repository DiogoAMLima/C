#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int y;
	int x[6]={4,5,6,7,8,9};
	setlocale(LC_ALL, "");
	printf("O componente x[0]=%d\n",x[0]);
	printf("O componente x[1]=%d\n",x[1]);
	printf("O componente x[2]=%d\n",x[2]);
	printf("O componente x[3]=%d\n",x[3]);
	printf("O componente x[4]=%d\n",x[4]);
	printf("O componente x[5]=%d\n",x[5]);
	y=x[1]+x[4]-x[5];
	printf("\nO resultado da express�o: %d + %d - %d �: %d",x[1], x[4], x[5], y);
}
