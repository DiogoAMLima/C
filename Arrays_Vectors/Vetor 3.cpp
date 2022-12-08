#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
    int x[10],y[10],cont,cont2;
    cont2=1;
    setlocale(LC_ALL,"");
    cont=1;
    for(cont=1;cont<=10;cont++)
{
    printf("Entre com o número %d: ",cont);
    scanf("%d",&x[cont]);
}
    cont=1;
    for(cont=1;cont<=10;cont++)
{
    printf("\nO %d número digitado tem valor %d\n",cont,x[cont]);
}
    cont=1;
    for(cont=1;cont<=10;cont++)
{
    y[cont]=(x[cont]*x[cont]);
}
    cont=1;

{
    for(cont2=1;cont2<=10;cont2++)
{
    printf("\nO quadrado de %.2d é %.2d \n",x[cont2],y[cont2]);
}

}
    getch();
    return 0;
}
