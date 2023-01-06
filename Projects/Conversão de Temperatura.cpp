#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int op;
float K,C,F,Resultado;
float ConverTemp(){
	printf("\n\n----Escolha a conversão----\n");
	printf("\n\n (1) para calcular Celsius para Kelvin ");
	printf("\n (2) para calcular Kelvin para Celsius ");
	printf("\n (3) para calcular Celsius para Fahrenheit"); 
	printf("\n (4) para calcular Fahrenheit para Celsius");
	printf("\n (5) para calcular Kelvin para Fahrenheit"); 
	printf("\n (6) para calcular Fahrenheit para Kelvin");
	printf("\n (7) para sair");
	return 0;
}
float CelsiusKelvin(){
	
	printf("\nDigite o valor em Celsius: ");
	scanf("%f",&C);
	K=C+273;
	return (K);
}
float KelvinCelsius(){
	
	printf("\nDigite o valor em Kelvin: ");
	scanf("%f",&K);
	C=K-273;
	return (C);
}
float CelsiusFahrenheit(){
		
	printf("\nDigite o valor em Celsius: ");
	scanf("%f",&C);
	Resultado = C/5;
	F = (Resultado*9)+32;
	return (F);	
}
float FahrenheitCelsius(){
		
	printf("\nDigite o valor em Kelvin: ");
	scanf("%f",&F);
	Resultado = (F-32)/9;
	C = Resultado*5;
	return (C);
}
float KelvinFahrenheit(){
		
	printf("\nDigite o valor em Kelvin: ");
	scanf("%f",&K);
	Resultado = (K-273)/5;
	F = (Resultado*9)+32;
	return (F);
}
float FahrenheitKelvin(){
		
	printf("\nDigite o valor em Fahrenheit: ");
	scanf("%f",&F);
	Resultado = (F-32)/9;
    K = (Resultado*5)+273;
	return (K);
}

int main(){
	setlocale(LC_ALL,"");
	 do{
 	ConverTemp(); 
 	printf("\n\nDigite sua opção: ");
 	scanf("%d",&op);
 	
 	switch(op){
 		
 		case 1:{
 			CelsiusKelvin();
 			printf("\nCelsiusKelvin: %2.f\n",K);
 			break;
 		}
 		case 2:{
 			KelvinCelsius();
 			printf("\nKelvinCelsius: %2.f\n",C);
 			break;
 		}
 		case 3:{
 			CelsiusFahrenheit();
 			printf("\nCelsiusFahrenheit: %2.f\n",F);
 			break;
 		}
 		case 4:{
 			FahrenheitCelsius();
 			printf("\nFahrenheitCelsius: %2.f\n",C);
 			break;
 		} 
 		case 5:{
 			KelvinFahrenheit();
 			printf("\nKelvinFahrenheit: %2.f\n",F);
 			break;
 		}
 		case 6:{
 			FahrenheitKelvin();
 			printf("\nFahrenheitKelvin: %2.f\n",K);
 			break;
 		}
 		case 7:{
 			printf("\nAté a próxima...\n\n");
			break;
		 }
 		default:{
 			printf("\n\nConversão inválida...tente novamente\n\n");
 			break;
 		}
 	}
 }
 	while (op!=7);
 	system("Pause");
}

