#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"");
	
	int a;
	printf("Digite sua op��o: ");
 	scanf("%i",&a);
	
	printf("O valor da vari�vel �: %i\n", a);
	printf("O endere�o de mem�ria da vari�vel �: %i\n", &a);
	
	/* Ponteiro */
	
	int *ponteiro;
	ponteiro = &a;
	
	printf("\nO ponteiro est� apontando para o valor da vari�vel a: %i\n", *ponteiro);
	printf("O ponteiro est� apontando para o endere�o de mem�ria da vari�vel a: %i\n", ponteiro);
		
	getchar();
	
	return 0;
}
