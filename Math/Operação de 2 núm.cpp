#include <stdio.h>
#include <locale.h>

int main(){
	float n1,n2;
	int op;
	setlocale(LC_ALL,"");
	printf("Informe um n�mero: ");
	scanf("%f",&n1);
	printf("Informe outro n�mero: ");
	scanf("%f",&n2);
	printf("Que opera��o deseja fazer (Digite 1 para Adi��o, 2 para subtra��o, 3 para multiplica��o ou 4 para divis�o): ");
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
