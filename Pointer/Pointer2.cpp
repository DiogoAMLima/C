#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	
	system("color C");
	setlocale(LC_ALL,"");
	
	//int x = 1;
	//int y = x;
	
	//x = 2;
	
	//printf("Valor da variável x = %i e o valor da variável y = %i\n", x, y);
	
	/* Ponteiro */
	
	int x = 1;
	int *ponteiro;
	ponteiro = &x; /* Endereço de memória  */
	
	int y = 2;
	*ponteiro = y; /* O *ponteiro apontou no endereço de memória de x e determinou que aquele valor será o valor de y*/
	
	printf("Valor do ponteiro = %i e o valor do endereço de memória = %i\n", x, y);
	
	getchar();
	
	return 0;
}
