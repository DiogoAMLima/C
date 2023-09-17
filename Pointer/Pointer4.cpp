#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mult (int x, int y, int z){
		return x * y * z;
	}

int main (void) {
	
	setlocale(LC_ALL,"");
	system("color B");
	
	int a, b, c, s;
	int (*ponteiro) (int, int, int) = mult;
	
	printf("Escolha 3 números: ");
	scanf("%d %d %d", &a, &b, &c);
	
	s = ponteiro(a, b, c);
	printf("O resultado de %d * %d * %d é = %d\n", a, b, c, s);
	
	getchar();

	return 0;
}
