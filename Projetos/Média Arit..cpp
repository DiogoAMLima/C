#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float n1,n2,n3;
	float media_ar;
	setlocale(LC_ALL,"");
	printf("Informe a primeira nota: ");
	scanf("%f",&n1);
	printf("Informe a segunda nota: ");
	scanf("%f",&n2);
	printf("Informe a terceira nota: ");
	scanf("%f",&n3);
	media_ar=(n1+n2+n3)/3;
	printf("A média aritmética entre: %.2f e %.2f e %.2f é: %.2f",n1, n2, n3, media_ar);
	return 0;
}
