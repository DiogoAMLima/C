#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int cont=0,num;
    {	
	setlocale(LC_ALL,"");
	printf("——————Tabuada——————\n\n");
	printf("Informe um número: ");
	scanf("%d",&num);
	for(cont=0;cont<=10;cont++)
	printf("\n%d x %d = %d\n",num, cont, num*cont);
    }
    return 0;
}
