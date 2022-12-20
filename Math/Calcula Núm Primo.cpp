#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int primos[100000], x, num, i, qtd = 0, c = 0;

int calculaPrimo(){
for(num = 1; num < x; num++){ 
for (i = 1; i <= num; i++){
if (num % i == 0)
qtd ++;
}
if (qtd == 2){
primos[c] = num;
c++;
}
qtd = 0;
}
printf("\nTemos %d números primos de 1 até %d: ", c, x);
for(int y=0; y<c; y++){
printf("\n\n%d->[%d]\n\n", y+1, primos[y]);
}
}

int main(void){
system("cls");
setlocale(LC_ALL,"");
qtd = 0;
printf("\nQual intervalo de 1 até x deseja saber os números primos? ");
scanf("%d", &x);

calculaPrimo();

system("pause");
return (0);
}
