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
	if((x<y+z)&&(y<x+z)&&(z<x+y)) // Condi��o para ser tri�ngulo
	if((x==y)&&(y==z))
	printf("\nTRI�NGULO EQUIL�TERO\n");
	else
	if((x!=y)&&(y!=z))
	printf("\nTRI�NGULO ESCALENO\n");
	else
	printf("\nTRI�NGULO IS�SCELES\n");
	else
	printf("\nOs lados n�o formam um tri�ngulo...\n");
   return 0;		
}
