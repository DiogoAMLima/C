#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int op;
float a,b,h,B,base,l,pi,r;

float MenuToggle(){
	
	setlocale(LC_ALL,"");
	printf("\n---Escolha uma op��o---\n");
	printf("\n\n(1) Para calcular a �rea do tri�ngulo");
	printf("\n(2) Para calcular a �rea da circunfer�ncia");
	printf("\n(3) Para calcular a �rea do quadrado"); 
	printf("\n(4) Para calcular a �rea do trap�zio");
	printf("\n(5) Para sair");
	return 0;
}
	
float AreaTriangulo(){
	
	
	printf("\nDigite a altura: ");
	scanf("%f",&h);
	printf("\nDigite a base: ");
	scanf("%f",&b);
	a=b*h/2;
	return (a);
}

float AreaCircunferencia(){
	
	
	printf("\nDigite o raio: ");
	scanf("%f",&r);
	
	a=3.14*(r*r);
	
	return (a);

}

float AreaQuadrado(){
	
	
	printf("\n\nDigite o valor do lado do quadrado: ");
	scanf("%f",&l);
	
	a=l*l;
	
	return (a); 
	
}

float AreaTrapezio(){
	
	
	printf("\nDigite o valor da base menor: ");
	scanf("%f",&b);
	printf("\nDigite o valor da base maior: ");
	scanf("%f",&B);
	printf("\nDigite o valor da altura: ");
	scanf("%f",&h);
	
	a=(B+b)*h/2;
		
 	return (a);
}
	
int main(){
	
 do{
 	MenuToggle(); 
 	printf("\n\nDigite sua op��o: ");
 	scanf("%d",&op);
 	
 	switch(op){
 		
 		case 1:{
 			AreaTriangulo();
 			printf("\n�rea tri�ngulo: %.2f\n",a);
 			break;
 		}
 		case 2:{
 			AreaCircunferencia();
 			printf("\n�rea circunfer�ncia: %.2f\n",a);
 			break;
 		}
 		case 3:{
 			AreaQuadrado();
 			printf("\n�rea quadrado: %.2f\n",a);
 			break;
 		}
 		case 4:{
 			AreaTrapezio();
 			printf("\n�rea trap�zio: %.2f\n",a);
 			break;
 		}
 		case 5:{
 			printf("\nAt� a pr�xima...\n\n");
			break;
		 }
 		default:{
 			printf("\n\nN�mero inv�lido...tente novamente\n");
 			break;
 		}
 	}
 }
 	while (op!=5);
 	system("Pause");
 } 


