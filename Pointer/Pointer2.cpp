#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	
	system("color C");
	setlocale(LC_ALL,"");
	
	//int x = 1;
	//int y = x;
	
	//x = 2;
	
	//printf("Valor da vari�vel x = %i e o valor da vari�vel y = %i\n", x, y);
	
	/* Ponteiro */
	
	int x = 1;
	int *ponteiro;
	ponteiro = &x; /* Endere�o de mem�ria  */
	
	int y = 2;
	*ponteiro = y; /* O *ponteiro apontou no endere�o de mem�ria de x e determinou que aquele valor ser� o valor de y*/
	
	printf("Valor do ponteiro = %i e o valor do endere�o de mem�ria = %i\n", x, y);
	
	getchar();
	
	return 0;
}
