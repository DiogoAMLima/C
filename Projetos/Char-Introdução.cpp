#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

   main()
{
   char Nome[30];
   
   char Nome2[30];
   
   setlocale(LC_ALL,"");
   strcpy(Nome, "Diogo de Albuquerque");  // scrpy = fun��o para copiar o valor da string na segunda posi��o do argumento (segundo argumento pode ser: express�o em string, vari�vel ou valor literal de uma string entre "")
   
   printf("O funcion�rio %s foi transferido", Nome);
   
   printf("\n\nInforme um nome: ");
   gets(Nome2);  // N�o muito recomendado porque n�o checa a tamanho declarado na vari�vel, neste caso [30].
   
   printf("\nO funcion�rio: %s foi promovido\n", Nome2);
   
   // Lembrando que strings em c terminam no \0 (Strings = vetor de caracteres)
   
   getch();  //Usado para pausar o terminal. Esta fun��o l� um caracter do teclado e n�o mostra no terminal
   // Temos a fun��o clrscr() para limpar a tela
}
