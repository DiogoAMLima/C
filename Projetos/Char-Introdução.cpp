#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

   main()
{
   char Nome[30];
   
   char Nome2[30];
   
   setlocale(LC_ALL,"");
   strcpy(Nome, "Diogo de Albuquerque");  // scrpy = função para copiar o valor da string na segunda posição do argumento (segundo argumento pode ser: expressão em string, variável ou valor literal de uma string entre "")
   
   printf("O funcionário %s foi transferido", Nome);
   
   printf("\n\nInforme um nome: ");
   gets(Nome2);  // Não muito recomendado porque não checa a tamanho declarado na variável, neste caso [30].
   
   printf("\nO funcionário: %s foi promovido\n", Nome2);
   
   // Lembrando que strings em c terminam no \0 (Strings = vetor de caracteres)
   
   getch();  //Usado para pausar o terminal. Esta função lê um caracter do teclado e não mostra no terminal
   // Temos a função clrscr() para limpar a tela
}
