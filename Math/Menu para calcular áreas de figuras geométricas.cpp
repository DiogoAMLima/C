#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int op;
float a,b,h,B,base,l,pi,r;

float MenuToggle(){
	
    setlocale(LC_ALL,"");
    printf("\n---Escolha uma opção---\n");
    printf("\n\n(1) Para calcular a área do triângulo");
    printf("\n(2) Para calcular a área da circunferência");
    printf("\n(3) Para calcular a área do quadrado"); 
    printf("\n(4) Para calcular a área do trapézio");
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
    printf("\n\nDigite sua opção: ");
    scanf("%d",&op);
 	
    switch(op){
 		
 	case 1:{
 	   AreaTriangulo();
 	   printf("\nÁrea triângulo: %.2f\n",a);
 	   break;
 		}
 	case 2:{
 	   AreaCircunferencia();
 	   printf("\nÁrea circunferência: %.2f\n",a);
 	   break;
 		}
 	case 3:{
 	   AreaQuadrado();
 	   printf("\nÁrea quadrado: %.2f\n",a);
 	   break;
 		}
 	case 4:{
 	   AreaTrapezio();
 	   printf("\nÁrea trapézio: %.2f\n",a);
 	   break;
 		}
 	case 5:{
 	   printf("\nAté a próxima...\n\n");
	   break;
		 }
 	default:{
 	   printf("\n\nNúmero inválido...tente novamente\n");
 	   break;
 	}
 }
}
 while (op!=5);
 system("Pause");
} 
