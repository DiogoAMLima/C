#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mult(int A,int B)
{
    int a,b;
    a=A;
    b=B;
    if(a == 0 || b == 0)
    return 0;
    else if (b == 1)
    return a;
    else
    return a+mult(a,b-1);
}
int main()
{
    int a,b;
    setlocale(LC_ALL,"");
    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite o valor de b: ");
    scanf("%d",&b);
    printf("\nO resultado é: %d",a+mult(a,b-1));
}
