#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int op;
char RJ,SP,MG,ES,AM,GO,AC,RS,PR,SC,RO,RR,AL,AP,MA,BA,CE,PA,PI,MT,MS,PB,PE,RN,SE,TO;
char Capitais(){
    printf("\n\n----Escolha o Estado----\n");
    printf("\n\n (1) para Rio de Janeiro ");
    printf("\n (2) para São Paulo ");
    printf("\n (3) para Minas Gerais"); 
    printf("\n (4) para Espírito Santo");
    printf("\n (5) para Amazonas "); 
    printf("\n (6) para Goiás");
    printf("\n (7) para Acre");
    printf("\n (8) para Rio Grande do Sul");
    printf("\n (9) para Paraná");
    printf("\n (10) para Santa Catarina");
    printf("\n (11) para Rondônia");
    printf("\n (12) para Roraima");
    printf("\n (13) para Alagoas");
    printf("\n (14) para Amapá");
    printf("\n (15) para Maranhao");
    printf("\n (16) para Bahia");
    printf("\n (17) para Ceará");
    printf("\n (18) para Pará");
    printf("\n (19) para Piauí");
    printf("\n (20) para Mato Grosso");
    printf("\n (21) para Mato Grosso do Sul");
    printf("\n (22) para Tocantins");
    printf("\n (23) para Pernambuco");
    printf("\n (24) para Rio Grande do Norte");
    printf("\n (25) para Sergipe");
    printf("\n (26) para Paraíba");
    printf("\n (27) para Sair");
    return 0;
}
char RiodeJaneiro(){
	
    printf("\nRio de Janeiro:");
    scanf("%c",&RJ);
    return (RJ);
}
char SaoPaulo(){
	
    printf("\nSão Paulo:");
    scanf("%c",&SP);
    return (SP);
}
char MinasGerais(){
		
    printf("\nMinas Gerais:");
    scanf("%c",&MG);
    return (MG);	
}
char EspiritoSanto(){
		
    printf("\nEspírito Santo:");
    scanf("%c",&ES);
    return (ES);
}
char Amazonas(){
		
    printf("\nAmazonas:");
    scanf("%c",&AM);
    return (AM);
}
char Goias(){
		
    printf("\nGoiás:");
    scanf("%c",&GO);
    return (GO);
}
char Acre(){
	
    printf("\nAcre:");
    scanf("%c",&AC);
    return (AC);
}
char RioGrandedoSul(){
	
    printf("\nRio Grande do Sul:");
    scanf("%c",&RS);
    return (RS);
}
char Parana(){
	
    printf("\nParaná:");
    scanf("%c",&PR);
    return (PR);
}
char SantaCatarina(){
	
    printf("\nSanta Catarina:");
    scanf("%c",&SC);
    return (SC);
}
char Rondonia(){
	
    printf("\nRondônia:");
    scanf("%c",&RO);
    return (RO);
}
char Roraima(){
	
    printf("\nRoraima:");
    scanf("%c",&RR);
    return (RR);
}
char Alagoas(){
	
    printf("\nAlagoas:");
    scanf("%c",&AL);
    return (AL);
}
char Amapa(){
	
    printf("\nAmapá:");
    scanf("%c",&AP);
    return (AP);
}
char Maranhao(){
	
    printf("\nMaranhão:");
    scanf("%c",&MA);
    return (MA);
}
char Bahia(){
	
    printf("\nBahia:");
    scanf("%c",&BA);
    return (BA);
}
char Ceara(){
	
    printf("\nCeará:");
    scanf("%c",&CE);
    return (CE);
}
char Para(){
	
    printf("\nPará:");
    scanf("%c",&PA);
    return (PA);
}
char Piaui(){
	
    printf("\nPiauí:");
    scanf("%c",&PI);
    return (PI);
}
char MatoGrosso(){
	
    printf("\nMato Grosso:");
    scanf("%c",&MT);
    return (MT);
}
char MatoGrossodoSul(){
	
    printf("\nMato Grosso do Sul:");
    scanf("%c",&MS);
    return (MS);
}
char Tocantins(){

    printf("\nTocantins:");
    scanf("%c",&TO);
    return (TO);
}
char Pernambuco(){
	
    printf("\nPernambuco:");
    scanf("%c",&PE);
    return (PE);
}
char RioGrandedoNorte(){
	
    printf("\nRio Grande do Norte:");
    scanf("%c",&RN);
    return (RN);
}
char Sergipe(){
	
    printf("\nSergipe:");
    scanf("%c",&SE);
    return (SE);
}
char Paraiba(){
	
    printf("\nParaíba:");
    scanf("%c",&PB);
    return (PB);
}
int main(){
    setlocale(LC_ALL,"");
     do{
    Capitais(); 
    printf("\n\nDigite sua opção: ");
    scanf("%d",&op);
 	
    switch(op){
 		
 	case 1:{
 	    RiodeJaneiro();
 	    printf("\n\nA capital é Rio de Janeiro",RJ);
 	    break;
 	}
 	case 2:{
 	    SaoPaulo();
 	    printf("\n\nA capital é São Paulo",SP);
 	    break;
 	}
 	case 3:{
 	    MinasGerais();
 	    printf("\n\nA capital é Belo Horizonte",MG);
 	    break;
 	}
 	case 4:{
 	    EspiritoSanto();
 	    printf("\n\nA capital é Vitória ",ES);
 	    break;
 	} 
 	case 5:{
 	    Amazonas();
 	    printf("\n\nA capital é Manaus ",AM);
 	    break;
 	}
 	case 6:{
 	    Goias();
 	    printf("\n\nA capital é Goiânia",GO);
 	    break;
 	}
 	case 7:{
 	    Acre();
 	    printf("\n\nA capital é Rio Branco",AC);
 	    break;
 	}
 	case 8:{
 	    RioGrandedoSul();
 	    printf("\n\nA capital é Porto Alegre",RS);
 	    break;
 	}
 	case 9:{
 	    Parana();
 	    printf("\n\nA capital é Curitiba",PR);
 	    break;
 	}
 	case 10:{
 	    SantaCatarina();
 	    printf("\n\nA capital é Florianópolis",SC);
 	    break;
 	}
 	case 11:{
 	    Rondonia();
 	    printf("\n\nA capital é Poto Velho",RO);
 	    break;
 	}
 	case 12:{
 	    Roraima();
 	    printf("\n\nA capital é Boa Vista",RR);
 	    break;
 	}
 	case 13:{
 	    Alagoas();
 	    printf("\n\nA capital é Maceió",AL);
 	    break;
 	}
 	case 14:{
 	    Amapa();
 	    printf("\n\nA capital é Macapá",AP);
 	    break;
 	}
 	case 15:{
 	    Maranhao();
 	    printf("\n\nA capital é São Luís",MA);
 	    break;
 	}
 	case 16:{
 	    Bahia();
 	    printf("\n\nA capital é Salvador",BA);
 	    break;
 	}
 	case 17:{
 	    Ceara();
 	    printf("\n\nA capital é Fortaleza",CE);
 	    break;
 	}
 	case 18:{
 	    Para();
 	    printf("\n\nA capital é Belém ",PA);
 	    break;
 	}
 	case 19:{
 	    Piaui();
 	    printf("\n\nA capital é Teresina ",PI);
 	    break;
 	}
 	case 20:{
 	    MatoGrosso();
 	    printf("\n\nA capital é Cuiabá ",MT);
 	    break;
 	}
 	case 21:{
 	    MatoGrossodoSul();
 	    printf("\n\nA capital é Campo Grande ",MS);
 	    break;
 	}
 	case 22:{
 	    Tocantins();
 	    printf("\n\nA capital é Palmas ",TO);
 	    break;
 	}
 	case 23:{
 	    Pernambuco();
 	    printf("\n\nA capital é Recife ",PE);
 	    break;
 	}
 	case 24:{
 	    RioGrandedoNorte();
 	    printf("\n\nA capital é Natal ",RN);
 	    break;
 	}
 	case 25:{
 	    Sergipe();
 	    printf("\n\nA capital é Aracaju ",SE);
 	    break;
 	}
 	case 26:{
 	    Paraiba();
 	    printf("\n\nA capital é João Pessoa ",PB);
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

