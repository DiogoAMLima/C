#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verif(int x)
{
    int num,verif2;
    num=x;
    verif2=num;
    return verif2;
}
int main()
{
    int num;
    setlocale(LC_ALL,"");
    printf("Digite o valor do número: ");
    scanf("%d",&num);
    if(num>0)
    num=1;
    else if(num<0)
    num=(-1);
    else if(num=0)
    num=0;
    printf("\nO valor do número é: %d",verif(num));
	
}
