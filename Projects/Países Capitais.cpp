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
	printf("\n (5) para Col�mbia "); 
	printf("\n (6) para Paraguai");
	printf("\n (7) para Alemanha");
	printf("\n (8) para Fran�a");
	printf("\n (9) para Espanha");
	printf("\n (10) para Portugal");
	printf("\n (11) para Pa�ses Baixos");
	printf("\n (12) para B�lgica");
	printf("\n (13) para Luxemburgo");
	printf("\n (14) para It�lia");
	printf("\n (15) para �ustria");
	printf("\n (16) para Pol�nia");
	printf("\n (17) para R�ssia");
	printf("\n (18) para Su��a");
	printf("\n (19) para Su�cia");
	printf("\n (20) para Dinamarca");
	printf("\n (21) para Noruega");
	printf("\n (22) para Finl�ndia");
	printf("\n (23) para Bulg�ria");
	printf("\n (24) para Rom�nia");
	printf("\n (25) para M�xico");
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
	
	printf("\nCol�mbia:");
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
	
	printf("\nFran�a:");
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
	
	printf("\nPa�ses Baixos:");
	scanf("%c",&PB);
	return (PB);
}
char Belgica(){
	
	printf("\nB�lgica:");
	scanf("%c",&BL);
	return (BL);
}
char Luxemburgo(){
	
	printf("\nLuxemburgo:");
	scanf("%c",&LX);
	return (LX);
}
char Italia(){
	
	printf("\nIt�lia:");
	scanf("%c",&IT);
	return (IT);
}
char Austria(){
	
	printf("\n�ustria:");
	scanf("%c",&AS);
	return (AS);
}
char Polonia(){
	
	printf("\nPol�nia:");
	scanf("%c",&PL);
	return (PL);
}
char Russia(){
	
	printf("\nR�ssia:");
	scanf("%c",&RS);
	return (RS);
}
char Suica(){
	
	printf("\nSu��a:");
	scanf("%c",&SU);
	return (SU);
}
char Suecia(){
	
	printf("\nSu�cia:");
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
	
	printf("\nFinl�ndia:");
	scanf("%c",&FN);
	return (FN);
}
char Bulgaria(){
	
	printf("\nBulg�ria:");
	scanf("%c",&BG);
	return (BG);
}
char Romenia(){
	
	printf("\nRom�nia:");
	scanf("%c",&RO);
	return (RO);
}
char Mexico(){
	
	printf("\nM�xico:");
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
 	printf("\n\nDigite sua opc�o: ");
 	scanf("%d",&op);
 	
 	switch(op){
 		
 		case 1:{
 			Brasil();
 			printf("\n\nA capital �: Bras�lia",BR);
 			break;
 		}
 		case 2:{
 			Argentina();
 			printf("\n\nA capital �: Buenos Aires",AR);
 			break;
 		}
 		case 3:{
 			Uruguai();
 			printf("\n\nA capital �: Montevid�u",UR);
 			break;
 		}
 		case 4:{
 			Chile();
 			printf("\n\nA capital �: Santiago ",CH);
 			break;
 		} 
 		case 5:{
 			Colombia();
 			printf("\n\nA capital �: Bogot� ",CO);
 			break;
 		}
 		case 6:{
 			Paraguai();
 			printf("\n\nA capital �: Assun�ao",PR);
 			break;
 		}
 		case 7:{
 			Alemanha();
 			printf("\n\nA capital �: Berlim",AL);
 			break;
 		}
 		case 8:{
 			Franca();
 			printf("\n\nA capital �: Paris",FR);
 			break;
 		}
 		case 9:{
 			Espanha();
 			printf("\n\nA capital �: Madrid",ES);
 			break;
 		}
 		case 10:{
 			Portugal();
 			printf("\n\nA capital �: Lisboa",PT);
 			break;
 		}
 		case 11:{
 			PaisesBaixos();
 			printf("\n\nA capital �: Amsterda",PB);
 			break;
 		}
 		case 12:{
 			Belgica();
 			printf("\n\nA capital �: Bruxelas",BL);
 			break;
 		}
 		case 13:{
 			Luxemburgo();
 			printf("\n\nA capital �: Luxemburgo",LX);
 			break;
 		}
 		case 14:{
 			Italia();
 			printf("\n\nA capital �: Roma",IT);
 			break;
 		}
 		case 15:{
 			Austria();
 			printf("\n\nA capital �: Viena",AS);
 			break;
 		}
 		case 16:{
 			Polonia();
 			printf("\n\nA capital �: Vars�via",PL);
 			break;
 		}
 		case 17:{
 			Russia();
 			printf("\n\nA capital �: Moscou",RS);
 			break;
 		}
 		case 18:{
 			Suica();
 			printf("\n\nA capital �: Berna",SU);
 			break;
 		}
 		case 19:{
 			Suecia();
 			printf("\n\nA capital �: Estocolmo",SE);
 			break;
 		}
 		case 20:{
 			Dinamarca();
 			printf("\n\nA capital �: Copenhage",DN);
 			break;
 		}
 		case 21:{
 			Noruega();
 			printf("\n\nA capital �: Oslo",NR);
 			break;
 		}
 		case 22:{
 			Finlandia();
 			printf("\n\nA capital �: Helsinque",FN);
 			break;
 		}
 		case 23:{
 			Bulgaria();
 			printf("\n\nA capital �: Sofia",BG);
 			break;
 		}
 		case 24:{
 			Romenia();
 			printf("\n\nA capital �: Bucareste",RO);
 			break;
 		}
 		case 25:{
 			Mexico();
 			printf("\n\nA capital �: Cidade do M�xico",MX);
 			break;
 		}
 		case 26:{
 			EstadosUnidos();
 			printf("\n\nA capital �: Washington D.C.",EUA);
 			break;
 		}
 		case 27:{
 			printf("\n\nAt� a pr�xima...\n\n");
			break;
		 }
 		default:{
 			printf("\n\nEstado inv�lido...tente novamente\n");
 			break;
 		}
 	}
 }
 	while (op!=27);
 	system("Pause");
}

