#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"");
    int cont,num,impar;
    impar=0;
    for(cont=1;cont<=10;cont++){
	 printf("informe o número: ");
	 scanf("%d",&num);
	 if(num%2==1)
	 impar++;
    }
    printf("quantidade de números ímpares:%d",impar);
    return 0;
}
