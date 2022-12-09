#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int soma(int *m,int *n){
	int soma;
	soma=*m+*n;
	
}
int main(){
int n1,n2,res;

setlocale(LC_ALL,"");
printf("Digite o primeiro número: ");
scanf("%d",&n1);

printf("Digite o segundo número: ");
scanf("%d",&n2);

res=soma(&n1,&n2);

printf("\nResultado: %.d",res);

return 0;
system("pause");
}
