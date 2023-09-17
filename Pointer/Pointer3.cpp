#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	
	setlocale(LC_ALL,"");
	system("color D");
	
	int x = 8;
	int y = 2;
	
	int *px = &x;
	int *py = &y;
	int soma = *px + *py;
	int sub = *px - *py;
	int mult = *px * *py;
	int div = *px / *py;
	
	printf("%i + %i = %i\n", *px, *py, soma);
	printf("%i - %i = %i\n", *px, *py, sub);
	printf("%i * %i = %i\n", *px, *py, mult);
	printf("%i / %i = %i\n", *px, *py, div);
		
	getchar();
	
	return 0;
}
