#include <stdio.h>
#include <locale.h>

int soma (int a, int b){
int soma;
a = 2*a; b = 2*b;
soma = a + b;
return soma;
}

int main (){

setlocale(LC_ALL,"");
int x, y, res;
printf ("Digite um n�mero: ");
scanf ("%d",&x);

printf ("Digite outro n�mero: ");
scanf ("%d",&y);

res=soma(x, y);

printf("Soma do dobro de %d e %d �: %d",x, y, res);

return 0;

}
