#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int op;
char BR,AR,UR,CH,CO,PR,AL,FR,ES,PT,PB,BL,LX,IT,AS,PL,RS,SU,SE,DN,NR,FN,BG,RO,MX,EUA;
char CapitaisPaises(){
	printf("\n\n----Escolha o Pais----\n");
	printf("\n\n (1) para Brasil ");
	printf("\n (2) para Argentina ");
	printf("\n (3) para Uruguai"); 
	printf("\n (4) para Chile");
	printf("\n (5) para Colômbia "); 
	printf("\n (6) para Paraguai");
	printf("\n (7) para Alemanha");
	printf("\n (8) para França");
	printf("\n (9) para Espanha");
	printf("\n (10) para Portugal");
	printf("\n (11) para Países Baixos");
	printf("\n (12) para Bélgica");
	printf("\n (13) para Luxemburgo");
	printf("\n (14) para Itália");
	printf("\n (15) para Áustria");
	printf("\n (16) para Polônia");
	printf("\n (17) para Rússia");
	printf("\n (18) para Suíça");
	printf("\n (19) para Suécia");
	printf("\n (20) para Dinamarca");
	printf("\n (21) para Noruega");
	printf("\n (22) para Finlândia");
	printf("\n (23) para Bulgária");
	printf("\n (24) para Romênia");
	printf("\n (25) para México");
	printf("\n (26) para Estados Unidos");
	printf("\n (27) para Sair");
	return 0;
}
char Brasil(){
	
	printf("\nBrasil:");
	scanf("%c",&BR);
	return (BR);
}
char Argentina(){
	
	printf("\nArgentina:");
	scanf("%c",&AR);
	return (AR);
}
char Uruguai(){
		
	printf("\nUruguai:");
	scanf("%c",&UR);
	return (UR);	
}
char Chile(){
		
	printf("\nChile:");
	scanf("%c",&CH);
	return (CH);
}
char Colombia(){
	
	printf("\nColômbia:");
	scanf("%c",&CO);
	return (CO);
}
char Paraguai(){
		
	printf("\nParaguai:");
	scanf("%c",&PR);
	return (PR);
}
char Alemanha(){
	
	printf("\nAlemanha:");
	scanf("%c",&AL);
	return (AL);
}
char Franca(){
	
	printf("\nFrança:");
	scanf("%c",&FR);
	return (FR);
}
char Espanha(){
	
	printf("\nEspanha:");
	scanf("%c",&ES);
	return (ES);
}
char Portugal(){
	
	printf("\nPortugal:");
	scanf("%c",&PT);
	return (PT);
}
char PaisesBaixos(){
	
	printf("\nPaíses Baixos:");
	scanf("%c",&PB);
	return (PB);
}
char Belgica(){
	
	printf("\nBélgica:");
	scanf("%c",&BL);
	return (BL);
}
char Luxemburgo(){
	
	printf("\nLuxemburgo:");
	scanf("%c",&LX);
	return (LX);
}
char Italia(){
	
	printf("\nItália:");
	scanf("%c",&IT);
	return (IT);
}
char Austria(){
	
	printf("\nÁustria:");
	scanf("%c",&AS);
	return (AS);
}
char Polonia(){
	
	printf("\nPolônia:");
	scanf("%c",&PL);
	return (PL);
}
char Russia(){
	
	printf("\nRússia:");
	scanf("%c",&RS);
	return (RS);
}
char Suica(){
	
	printf("\nSuíça:");
	scanf("%c",&SU);
	return (SU);
}
char Suecia(){
	
	printf("\nSuécia:");
	scanf("%c",&SE);
	return (SE);
}
char Dinamarca(){
	
	printf("\nDinamarca:");
	scanf("%c",&DN);
	return (DN);
}
char Noruega(){
	
	printf("\nNoruega:");
	scanf("%c",&NR);
	return (NR);
}
char Finlandia(){
	
	printf("\nFinlândia:");
	scanf("%c",&FN);
	return (FN);
}
char Bulgaria(){
	
	printf("\nBulgária:");
	scanf("%c",&BG);
	return (BG);
}
char Romenia(){
	
	printf("\nRomênia:");
	scanf("%c",&RO);
	return (RO);
}
char Mexico(){
	
	printf("\nMéxico:");
	scanf("%c",&MX);
	return (MX);
}
char EstadosUnidos(){
	
	printf("\nEstados Unidos da America:");
	scanf("%c",&EUA);
	return (EUA);
}
int main(){
	setlocale(LC_ALL,"");
	 do{
 	CapitaisPaises(); 
 	printf("\n\nDigite sua opcão: ");
 	scanf("%d",&op);
 	
 	switch(op){
 		
 		case 1:{
 			Brasil();
 			printf("\n\nA capital é: Brasília",BR);
 			break;
 		}
 		case 2:{
 			Argentina();
 			printf("\n\nA capital é: Buenos Aires",AR);
 			break;
 		}
 		case 3:{
 			Uruguai();
 			printf("\n\nA capital é: Montevidéu",UR);
 			break;
 		}
 		case 4:{
 			Chile();
 			printf("\n\nA capital é: Santiago ",CH);
 			break;
 		} 
 		case 5:{
 			Colombia();
 			printf("\n\nA capital é: Bogotá ",CO);
 			break;
 		}
 		case 6:{
 			Paraguai();
 			printf("\n\nA capital é: Assunçao",PR);
 			break;
 		}
 		case 7:{
 			Alemanha();
 			printf("\n\nA capital é: Berlim",AL);
 			break;
 		}
 		case 8:{
 			Franca();
 			printf("\n\nA capital é: Paris",FR);
 			break;
 		}
 		case 9:{
 			Espanha();
 			printf("\n\nA capital é: Madrid",ES);
 			break;
 		}
 		case 10:{
 			Portugal();
 			printf("\n\nA capital é: Lisboa",PT);
 			break;
 		}
 		case 11:{
 			PaisesBaixos();
 			printf("\n\nA capital é: Amsterda",PB);
 			break;
 		}
 		case 12:{
 			Belgica();
 			printf("\n\nA capital é: Bruxelas",BL);
 			break;
 		}
 		case 13:{
 			Luxemburgo();
 			printf("\n\nA capital é: Luxemburgo",LX);
 			break;
 		}
 		case 14:{
 			Italia();
 			printf("\n\nA capital é: Roma",IT);
 			break;
 		}
 		case 15:{
 			Austria();
 			printf("\n\nA capital é: Viena",AS);
 			break;
 		}
 		case 16:{
 			Polonia();
 			printf("\n\nA capital é: Varsóvia",PL);
 			break;
 		}
 		case 17:{
 			Russia();
 			printf("\n\nA capital é: Moscou",RS);
 			break;
 		}
 		case 18:{
 			Suica();
 			printf("\n\nA capital é: Berna",SU);
 			break;
 		}
 		case 19:{
 			Suecia();
 			printf("\n\nA capital é: Estocolmo",SE);
 			break;
 		}
 		case 20:{
 			Dinamarca();
 			printf("\n\nA capital é: Copenhage",DN);
 			break;
 		}
 		case 21:{
 			Noruega();
 			printf("\n\nA capital é: Oslo",NR);
 			break;
 		}
 		case 22:{
 			Finlandia();
 			printf("\n\nA capital é: Helsinque",FN);
 			break;
 		}
 		case 23:{
 			Bulgaria();
 			printf("\n\nA capital é: Sofia",BG);
 			break;
 		}
 		case 24:{
 			Romenia();
 			printf("\n\nA capital é: Bucareste",RO);
 			break;
 		}
 		case 25:{
 			Mexico();
 			printf("\n\nA capital é: Cidade do México",MX);
 			break;
 		}
 		case 26:{
 			EstadosUnidos();
 			printf("\n\nA capital é: Washington D.C.",EUA);
 			break;
 		}
 		case 27:{
 			printf("\n\nAté a próxima...\n\n");
			break;
		 }
 		default:{
 			printf("\n\nEstado inválido...tente novamente\n");
 			break;
 		}
 	}
 }
 	while (op!=27);
 	system("Pause");
}

