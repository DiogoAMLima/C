#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int a,b,c,*pnt,*pnt2,*pnt3;
	setlocale(LC_ALL,"");
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	printf("\nDigite o valor de b: ");
	scanf("%d",&b);
	printf("\nDigite o valor de c: ");
	scanf("%d",&c);
	pnt=&a;
	*pnt=a;
	pnt2=&b;
	*pnt2=b;
	pnt3=&c;
	*pnt3=c;
	printf("\nValor dos ponteiros: %d-%d-%d",*pnt,*pnt2,*pnt3);
	printf("\nValores do endereços de memória: %d-%d-%d\n",pnt,pnt2,pnt3);
	return 0;
}
