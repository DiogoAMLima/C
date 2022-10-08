#include<stdio.h>
#include <locale.h>

int main(){
	float x,y,z;
	setlocale(LC_ALL,"");
	printf("Informe o lado x: ");
	scanf("%f",&x);
	printf("Informe o lado y: ");
	scanf("%f",&y);
	printf("Informe o lado z: ");
	scanf("%f",&z);
	if((x<y+z)&&(y<x+z)&&(z<x+y)) // Condição para ser triângulo
	if((x==y)&&(y==z))
	printf("\nTRIÂNGULO EQUILÁTERO\n");
	else
	if((x!=y)&&(y!=z))
	printf("\nTRIÂNGULO ESCALENO\n");
	else
	printf("\nTRIÂNGULO ISÓSCELES\n");
	else
	printf("\nOs lados não formam um triângulo...\n");
   return 0;		
}
