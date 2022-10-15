#include <stdio.h>
#include <locale.h>>

int main(){
	setlocale(LC_ALL,"");
	int numero;
	printf("Informe o número do mês para aparecer o nome: ");
	scanf("%d",&numero);
	switch(numero){
	  case 1:{
	  	printf("\n %d corresponde ao mês de: Janeiro\n", numero);
		break;}
	  case 2:{
	  	printf("\n %d corresponde ao mês de: Fevereiro\n", numero);
		break;}	
	  case 3:{
	  	printf("\n %d corresponde ao mês de: Março\n", numero);
		break;}	
	  case 4:{
	  	printf("\n %d corresponde ao mês de: Abril\n", numero);
		break;}	
	  case 5:{
	  	printf("\n %d corresponde ao mês de: Maio\n", numero);
		break;}
	  case 6:{
	  	printf("\n %d corresponde ao mês de: Junho\n", numero);
		break;}
	  case 7:{
	  	printf("\n %d corresponde ao mês de: Julho\n", numero);
		break;}
	  case 8:{
	  	printf("\n %d corresponde ao mês de: Agosto\n", numero);
		break;}
	  case 9:{
		printf("\n %d corresponde ao mês de: Setembro\n", numero);
		break;}
	  case 10:{
	  	printf("\n %d corresponde ao mês de: Outubro\n", numero);
		break;}
	  case 11:{
	  	printf("\n %d corresponde ao mês de: Novembro\n", numero);
		break;}
	  case 12:{
	  	printf("\n %d corresponde ao mês de: Dezembro\n", numero);
		break;}
	  default:{
	  	printf("\nMês inválido!!!\n");
		break;}
  }
return 0;	
}
