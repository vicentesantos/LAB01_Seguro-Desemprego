/*************************************/
/* Aluno1: Bruna Ciriaco Benedito */
/* Aluno2: Fernanda Gonçalves Lima */
/* Aluno3: João Pedro Oliveira Gonçalves */
/* Aluno4: Paulo Henrique Cardoso de Jesus */
/* Aluno4: Vicente Santos Gonçalves */
/* Algoritmo e Lógica de Programação */
/* Prof. Eliane */
/*************************************/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char tipoBeneficio;
	int requisitos, soma=0;
	bool teste;
	
	printf("Descubra se você tem direito ao benefício do Seguro-Desemprego\n");
	printf("______________________________________________________________\n");
	do{	
		printf("\n  ******* Insira um dos números abaixo para continuar *******\n");
		printf("______________________________________________________________");
		printf("\n %c 1 - Trabalhador Formal",272);
		printf("\n--------------------------------------------------------------");
		printf("\n %c 2 - Bolsa de Qualificação(licença não-remunerada)",272);
		printf("\n--------------------------------------------------------------");
		printf("\n %c 3 - Empregado Doméstico",272);
		printf("\n--------------------------------------------------------------");
		printf("\n %c 4 - Pescador Artesanal",272);
		printf("\n--------------------------------------------------------------");
		printf("\n %c 5 - Trabalhador Resgatado (escravidão)",272);
		printf("\n--------------------------------------------------------------");
		printf("\n %c 6 - Nenhuma das opções\n",272);
		printf("______________________________________________________________\n %c ",272);
		scanf("%d",&tipoBeneficio);
		system("clear||cls");
		printf("\n\nPara as próximas perguntas responda 1 para SIM e 2 para NÃO");
		printf("\n-----------------------------------------------------------------\n");
		switch(tipoBeneficio){
			teste=false;
			case 1:
				printf("\nFoi dispensado sem justa causa?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					system("clear||cls");
					printf("\n   Você não possui o direito de receber o benefício.\n   -------------------------------------------------");
					break;				
				}
				else if(requisitos==1){ //recebendo as respostas para somatoria de pontos e analise dos requisitos do seguro.
					//requisitos para ter o seguro (ignorar a demissão indireta): Sim, Sim, Não, Não, Sim - 5 pontos
					printf("\nFoi dispensado também por demissão indireta?\n%c ",272);
					scanf("%d",&requisitos);
					printf("\nRecebeu mais de 6 meses de salário consecutivamente?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==1){
						soma++;
					}
					printf("\nEstá no momento desempregado?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==1){
						soma++;
					}
					printf("\nPossui alguma renda própria suficiente para manter seu sustento e de seus familiares?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==2){
						soma++;
					}
					printf("\nEstá participando de outro benefício previdenciário (exceto auxílio-acidente e pensão por morte)?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==2){
						soma++;
					}
					printf("\nEsteve trabalhando por pelo menos 1 ano (12 meses) nesses ultimos 3 anos (36 meses)\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==1){
						soma++;
					}
					if(soma==5){
						system("clear||cls");
						printf("----------------------------------------------------------------------\n");
						printf("O usuário atende aos requisitos para receber o Seguro-Desemprego");
						printf("\n----------------------------------------------------------------------");
						break;
					}
					else{
						system("clear||cls");
						printf("----------------------------------------------------------------------\n");
						printf("O usuário NÃO atende aos requisitos para receber o Seguro-Desemprego");
						printf("\n----------------------------------------------------------------------");
						break;
					}	
				}				
				break;
			case 2:
				//requisitos para ter o seguro : Sim, Sim - 2 pontos
				printf("\nEstá com contrato de trabalho suspenso?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nEstá devidamente matriculado em um curso ou qualificação profissional?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				if(soma==2){
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usuário atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				else{
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usuário NÃO atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				break;
			case 3:
				//para conseguir o seguro: Sim, Sim, Não, Não - 4 pontos
				printf("\nFoi dispensado sem justa causa?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nNos ultimos 2 anos, você trabalhou exclusivamente como empregado doméstico por, no minimo, 15 meses?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nPossui renda própria suficiente para sustentar a você e seus familiares?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				printf("\nEstá participando de outro benefício previdenciário (exceto auxílio-acidente e pensão por morte)?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				if(soma==4){
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usuário atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				else{
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usuário NÃO atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				break;
			case 4:
				//requisitos para ter o beneficio: Sim, Sim, Não, Sim, Não - 5
				printf("\nPossui inscrição no INSS como segurado especial ?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nPossui comprovação de venda do pescado para o adquirente dos últimos 12 meses?\n%c",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nEstá participando de outro benefício previdenciário (exceto auxílio-acidente e pensão por morte)?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				printf("\nVocê comprova exercício profissional na pesca artesanal e que, se dedica na atividade?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nEstá associado a outro emprego ou outra fonte de renda que não seja relacionado a pesca?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				if(soma==5){
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usuário atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				else{
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usuário NÃO atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				break;
			case 5:
				//printf("Você escolheu: %d",tipoBeneficio);
				//requisitos aceito: sim, não, não - 3
				printf("\nVocê comprova ter sido resgatado do trabalho forçado devido a ação de fiscalização do MTE?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==1){
					soma++;
				}
				printf("\nEstá participando de outro benefício previdenciário (exceto auxílio-acidente e pensão por morte)?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				printf("\nPossui renda própria suficiente para sustentar a você e seus familiares?\n%c ",272);
				scanf("%d",&requisitos);
				if(requisitos==2){
					soma++;
				}
				if(soma==3){
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usuário atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				else{
					system("clear||cls");
					printf("----------------------------------------------------------------------\n");
					printf("O usuário NÃO atende aos requisitos para receber o Seguro-Desemprego");
					printf("\n----------------------------------------------------------------------");
					break;
				}
				break;
			case 6:
				printf("\n Para receber o seguro-desemprego é necessário se enquadrar em umas das condições das opções de 1 a 5.\n");
				printf("---------------------------------------------------------------------------------------------------------");
				break;
			default:
				printf("\n          ########  Opção invalida  #######\n_______________________________________________________");					
				break;
		}
		printf("\n\n\n          Deseja realizar uma nova consulta?\n");
		printf("\n  %c Digite o número 1 para sim ou o número 2 para não:\n  %c ",272,272);
		scanf("%d",&tipoBeneficio);
		if(tipoBeneficio==1){
			system("clear||cls");
			teste=true;
			soma=0;
		}	
		else{
			system("clear||cls");
			printf("\n\n\n\n\n\n\n        Agradecemos a preferência! \n\n\n\n\n\n\n");
			return (0);
			getch();
		}
	}while(teste==true);
}
