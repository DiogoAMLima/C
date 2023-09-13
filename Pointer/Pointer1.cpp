#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"");
	
	int a;
	printf("Digite sua opção: ");
 	scanf("%i",&a);
	
	printf("O valor da variável é: %i\n", a);
	printf("O endereço de memória da variável é: %i\n", &a);
	
	/* Ponteiro */
	
	int *ponteiro;
	ponteiro = &a;
	
	printf("\nO ponteiro está apontando para o valor da variável a: %i\n", *ponteiro);
	printf("O ponteiro está apontando para o endereço de memória da variável a: %i\n", ponteiro);
		
	getchar();
	
	return 0;
}
