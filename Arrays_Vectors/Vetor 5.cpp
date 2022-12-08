#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int x[10], i=0, maior=0, menor=0;
	for(i=0;i<10;i++)
{
	setlocale(LC_ALL,"");
    printf("Entre com o número na posição %d: ",i);
    scanf("%d",&x[i]);
    if(i==0){maior=x[i];menor=x[i];}
    if(x[i]>maior){
        maior=x[i];
      }
    else{
    if(x[i]<menor){
        menor=x[i];
    }
	}
}	
	for(i=0;i<10;i++)
	{
	system("color 2");
	printf("\nO valor da posição %d é: %d",i,x[i]);	
	}
	printf("\n\nO maior e o menor número digitado foi respectivamente %d e %d",maior, menor);
}
