#include<stdio.h>
#include<stdlib.h>

struct pessoa
{
    char nome[30];
    int idade;
    float altura;
    int telefone;
    
};
main(){
    FILE *pont_arq; 
    pont_arq = fopen("AMIGOS.txt", "w");
    if(pont_arq == NULL)
{
printf("Erro na abertura do arquivo!");
return 1;
}
    struct pessoa amigos[5];
    
    for (int i=0; i<5; i++)
    
    {   printf ("\nENTRE COM OS DADOS DO ALUNO %d\n" , i +1);
        printf ("\nDIGITE SEU NOME: "); scanf("%s",&amigos[i].nome);
        fprintf(pont_arq, "%s ", amigos[i].nome);
        printf ("\nDIGITE SUA IDADE: "); scanf("%d",&amigos[i].idade);
        fprintf(pont_arq, "%d ", amigos[i].idade);
        printf ("\nDIGITE SUA ALTURA: "); scanf("%f",&amigos[i].altura);
        fprintf(pont_arq, "%1.2f ", amigos[i].altura);
        printf ("\nDIGITE SEU TELEFONE: "); scanf("%d",&amigos[i].telefone);
        fprintf(pont_arq, "%d\n ", amigos[i].telefone);
        
        
    }
    for (int i=1; i<6; i++) 
    {
        printf ("\nDADOS DO ALUNO %d = %s %d %1.2f(cm) %d\n" ,i, amigos[i].nome ,amigos[i].idade ,amigos[i].altura, amigos[i].telefone) ;
        
    }
    fclose(pont_arq);
printf("\nDados gravados com sucesso!");
}

