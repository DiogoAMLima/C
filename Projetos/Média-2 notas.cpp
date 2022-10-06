#include <stdio.h>
#include <conio.h>
#include <locale.h>
    main()
{
   setlocale(LC_ALL,"");
   float P1,P2;
   float Media;
   printf("Informe a nota da P1: ");
   scanf("%f",&P1);
   printf("\nInforme a nota da P2: ");
   scanf("%f",&P2);
   Media = (P1 + P2) / 2.0;
   printf("\nMédia Final entre %.1f e %.1f é: %.1f", P1, P2, Media);
}
