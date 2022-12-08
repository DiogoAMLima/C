#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 0 - Preto
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
// C - Vermelho claro
// D - Lilás
// E - Amarelo claro
// F - Branco Brilhante

char op;
char blue, green, green_water, red, purple, yellow, white, gray, light_blue, light_green, light_water_green, light_red, lilac, light_yellow, bright_white;
char Cores(){
    setlocale(LC_ALL,"");
    printf("\n----Escolha a cor----\n");
    printf("\n (1) para Azul");
    printf("\n (2) para Verde"); 
    printf("\n (3) para Verde-água");
    printf("\n (4) para Vermelho"); 
    printf("\n (5) para Roxo");
    printf("\n (6) para Amarelo");
    printf("\n (7) para Branco");
    printf("\n (8) para Cinza");
    printf("\n (9) para Azul claro");
    printf("\n (A) para Verde claro");
    printf("\n (B) para Verde-água claro");
    printf("\n (C) para Vermelho claro");
    printf("\n (D) para Lilás");
    printf("\n (E) para Amarelo claro");
    printf("\n (F) para Branco brilhante");
    printf("\n (Z) para Sair");
    return 0;
}

char Azul() {
	
    printf("\nAzul");
    scanf("%c", &blue);
    return blue;
}

char Verde() {
	
    printf("\nVerde");
    scanf("%c", &green);
    return green;
}

char VerdeAgua() {
	
    printf("\nVerde-água");
    scanf("%c", &green_water);
    return green_water;
}

char Vermelho() {
	
    printf("\nVermelho");
    scanf("%c", &red);
    return red;
}

char Roxo() {
	
    printf("\nRoxo");
    scanf("%c", &purple);
    return purple;
}

char Amarelo() {
	
    printf("\nAmarelo");
    scanf("%c", &yellow);
    return yellow;
}

char Branco() {
	
    printf("\nBranco");
    scanf("%c", &white);
    return white;
}

char Cinza() {
	
    printf("\nCinza");
    scanf("%c", &gray);
    return gray;
}

char AzulClaro() {
	
    printf("\nAzul claro");
    scanf("%c", &light_blue);
    return light_blue;
}

char VerdeClaro() {
	
    printf("\nVerde claro");
    scanf("%c", &light_green);
    return light_green;
}

char VerdeAguaClaro() {
	
    printf("\nVerde-água claro");
    scanf("%c", &light_water_green);
    return light_water_green;
}

char VermelhoClaro() {
	
    printf("\nVermelho claro");
    scanf("%c", &light_red);
    return light_red;
}

char Lilas() {
	
    printf("\nLilás");
    scanf("%c", &lilac);
    return lilac;
}

char AmareloClaro() {
	
    printf("\nAmarelo claro");
    scanf("%c", &light_yellow);
    return light_yellow;
}

char BrancoBrilhante() {
	
    printf("\nBranco_brilhante");
    scanf("%c", &bright_white);
    return bright_white;
}


int main() {
    setlocale(LC_ALL,"");
    do{
    Cores(); 
    printf("\n\nDigite sua opção: ");
    scanf("%c",&op);
 	
     switch(op){
 		
 	 case '1':{
 	     Azul();
 	     system("color 1");
 	     printf("\n\nA cor escolhida foi: Azul\n", blue);
 	     break;
 	  }
 	  case '2':{
 	     Verde();
 	     system("color 2");
 	     printf("\n\nA cor escolhida foi: Verde\n", green);
 	     break;
 	  }
 	  case '3':{
 	     VerdeAgua();
 	     system("color 3");
 	     printf("\n\nA cor escolhida foi: Verde-água\n", green_water);
 	     break;
 	  } 
 	  case '4':{
 	     Vermelho();
 	     system("color 4");
 	     printf("\n\nA cor escolhida foi: Vermelho\n", red);
 	     break;
 	  }
 	  case '5':{
 	     Roxo();
 	     system("color 5");
 	     printf("\n\nA cor escolhida foi: Roxo\n", purple);
 	     break;
 	  }
 	  case '6':{
 	     Amarelo();
 	     system("color 6");
 	     printf("\n\nA cor escolhida foi: Amarelo\n", yellow);
 	     break;
 	  }
 	  case '7':{
 	     Branco();
 	     system("color 7");
 	     printf("\n\nA cor escolhida foi: Branco\n", white);
 	     break;
 	   }
 	  case '8':{
 	     Cinza();
 	     system("color 8");
 	     printf("\n\nA cor escolhida foi: Cinza\n", gray);
 	     break;
 	   }
 	  case '9':{
 	     AzulClaro();
 	     system("color 9");
 	     printf("\n\nA cor escolhida foi: Azul claro\n", light_blue);
 	     break;
 	  }
 	  case 'A':{
 	     VerdeClaro();
 	     system("color A");
 	     printf("\n\nA cor escolhida foi: Verde Claro\n", light_green);
 	     break;
 	  }
 	  case 'B':{
 	     VerdeAguaClaro();
 	     system("color B");
 	     printf("\n\nA cor escolhida foi: Verde-água claro\n", light_water_green);
 	     break;
 	  }
 	  case 'C':{
 	    VermelhoClaro();
 	    system("color C");
 	    printf("\n\nA cor escolhida foi: Vermelho claro\n", light_red);
 	    break;
 	  }
 	  case 'D':{
 	    Lilas();
 	    system("color D");
 	    printf("\n\nA cor escolhida foi: Lilás\n", lilac);
 	    break;
 	  }
 	  case 'E':{
 	    AmareloClaro();
 	    system("color E");
 	    printf("\n\nA cor escolhida foi: Amarelo claro\n", light_yellow);
 	    break;
 	  }	
          case 'F':{
 	    BrancoBrilhante();
 	    system("color F");
 	    printf("\n\nA cor escolhida foi: Branco brilhante\n", bright_white);
 	    break;
 	  }
 	  case 'Z':{
 	    printf("\n\nAté a próxima...\n\n");
	    break;
	  }
 	  default:{
 	    printf("\n\nCor inválida...tente novamente\n\n");
 	    break;
 	  }
    }
 }
    while (op!='Z');
    system("Pause");
}
