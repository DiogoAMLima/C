#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 1 - Azul
// 2 - Verde
// 3 - Verde-água
// 4 - Vermelho
// 5 - Roxo
// 6 - Amarelo
// 7 - Branco
// 8 - Cinza
// 9 - Azul claro
// A - Verde Claro
// B - Verde-água claro
// C - Vermelho Claro
// D - Lilás
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
   printf("\nO nome da pessoa é: %s e a idade é: %d anos", nome, idade);
   printf("\n\n");
   system("pause");
   return 0;
}
