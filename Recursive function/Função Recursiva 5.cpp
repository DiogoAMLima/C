#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int C(int N)
{
    int n;
    n=N;
    if(n == 0)
    return 1;
    else if(n>0)
    return 2*(2*(n-1)) + C((n-1)/(n+1));
	
}
int main()
{
    int n;
    setlocale(LC_ALL,"");
    printf("Digite o valor de n: ");
    scanf("%d",&n);
    printf("\nO resultado é: %.0d",C(n));
}
