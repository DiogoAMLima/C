#include <stdio.h>
#include <locale.h>>

int main(){
	setlocale(LC_ALL,"");
	int numero;
	printf("Informe o n�mero do m�s para aparecer o nome: ");
	scanf("%d",&numero);
	switch(numero){
	  case 1:{
	  	printf("\n %d corresponde ao m�s de: Janeiro\n", numero);
		break;}
	  case 2:{
	  	printf("\n %d corresponde ao m�s de: Fevereiro\n", numero);
		break;}	
	  case 3:{
	  	printf("\n %d corresponde ao m�s de: Mar�o\n", numero);
		break;}	
	  case 4:{
	  	printf("\n %d corresponde ao m�s de: Abril\n", numero);
		break;}	
	  case 5:{
	  	printf("\n %d corresponde ao m�s de: Maio\n", numero);
		break;}
	  case 6:{
	  	printf("\n %d corresponde ao m�s de: Junho\n", numero);
		break;}
	  case 7:{
	  	printf("\n %d corresponde ao m�s de: Julho\n", numero);
		break;}
	  case 8:{
	  	printf("\n %d corresponde ao m�s de: Agosto\n", numero);
		break;}
	  case 9:{
		printf("\n %d corresponde ao m�s de: Setembro\n", numero);
		break;}
	  case 10:{
	  	printf("\n %d corresponde ao m�s de: Outubro\n", numero);
		break;}
	  case 11:{
	  	printf("\n %d corresponde ao m�s de: Novembro\n", numero);
		break;}
	  case 12:{
	  	printf("\n %d corresponde ao m�s de: Dezembro\n", numero);
		break;}
	  default:{
	  	printf("\nM�s inv�lido!!!\n");
		break;}
  }
return 0;	
}
