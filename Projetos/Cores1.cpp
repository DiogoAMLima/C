#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 0 - Preto
// 1 - Azul
// 2 - Verde
// 3 - Verde-�gua
// 4 - Vermelho
// 5 - Roxo
// 6 - Amarelo
// 7 - Branco
// 8 - Cinza
// 9 - Azul claro
// A - Verde Claro
// B - Verde-�gua claro
// C - Vermelho Claro
// D - Lil�s
// E - Amarelo Claro
// F - Branco Brilhante

int main()
{
   system("color C");
   int idade;
   char nome[30];
   setlocale(LC_ALL,"");
   printf("Informe o nome: ");
   scanf("%s", &nome);
   printf("\nInforme a idade: ");
   scanf("%d", &idade);
   printf("\nO nome da pessoa �: %s e a idade �: %d anos", nome, idade);
   return 0;
}
