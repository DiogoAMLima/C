 #include <stdio.h>
 #include <locale.h>
 
int main ()
{
   char Ch;
   setlocale(LC_ALL,"");
   printf("Aperte uma tecla (ser� considerada a primeira tecla pressionada): ");
   Ch = getchar();
   printf("\nO c�digo ASCII da tecla pressionada �: %d\n",Ch);
   return (0); 
}
