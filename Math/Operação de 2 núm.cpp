#include <stdio.h>
#include <locale.h>

int main(){
	float n1,n2;
	int op;
	setlocale(LC_ALL,"");
	printf("Informe um número: ");
	scanf("%f",&n1);
	printf("Informe outro número: ");
	scanf("%f",&n2);
	printf("Que operação deseja fazer (Digite 1 para Adição, 2 para subtração, 3 para multiplicação ou 4 para divisão): ");
	scanf("%d",&op); 
	
    switch(op){
       case 1:{
         printf("%.2f + %.2f = %.2f\n",n1, n2, n1+n2);	
	     break;}
	   case 2:{
	     printf("%.2f - %.2f = %.2f\n",n1, n2, n1-n2);	
		 break;}
	   case 3:{
	     printf("%.2f * %.2f = %.2f\n",n1, n2, n1*n2);	
		 break;}
	   case 4:{
	     printf("%.2f / %.2f = %.2f\n",n1, n2, n1/n2);	
		 break;}
	   default:{
	   	  printf("Dados invalidos!\n");
		  break;}
   }    
return 0;
}
