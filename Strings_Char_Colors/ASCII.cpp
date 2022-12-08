 #include <stdio.h>
 #include <locale.h>
 
int main ()
{
   char Ch;
   setlocale(LC_ALL,"");
   printf("Aperte uma tecla (será considerada a primeira tecla pressionada): ");
   Ch = getchar();
   printf("\nO código ASCII da tecla pressionada é: %d\n",Ch);
   return (0); 
}
