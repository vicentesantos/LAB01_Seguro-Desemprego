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
	char requisitos, tipoBeneficio;
	int soma=0,soma1=0;
	float salario01, salario02, salario03, salario;
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
			case 1 ...2:
				if(tipoBeneficio==1){//Trabalhador Formal Pergunta
					printf("\nFoi dispensado sem justa causa?\n%c ",272);
					scanf("%d",&requisitos);
				}else{//Bolsa de qualificação - requisitos para ter o seguro : Sim, Sim - 2 pontos
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
				}
				printf("\nRecebeu o Seguro-Desemprego nos ultimos 16 meses?\n%c",272);
				scanf("%d",&soma1);
				if(requisitos==1 && tipoBeneficio==1 && soma1==2 || soma==2 && soma1==2){
					//requisitos para ter o seguro (ignorar a demissão indireta): Sim, Sim, sim, Não, Não, Sim - 6 pontos
					if(tipoBeneficio==1){
						printf("\nFoi dispensado também por demissão indireta?\n%c ",272);
						scanf("%d",&requisitos);
						printf("\nEstá no momento desempregado?\n%c ",272);
						scanf("%d",&requisitos);
						if(requisitos==1){
							soma++;
						}
						printf("\nEstá dentro do período aquisitivo (16 meses a partir da última dispensa)?\n%c ",272);
						scanf("%d",&requisitos);
						if(requisitos==1){
							soma++;
						}
					}
					printf("\nRecebeu mais de 6 meses de salário consecutivamente?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==1){
						soma++;
						soma1++;
					}
					printf("\nPossui alguma renda própria suficiente para manter seu sustento e de seus familiares?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==2){
						soma++;
						soma1++;
					}
					printf("\nEstá participando de outro benefício previdenciário (exceto auxílio-acidente e pensão por morte)?\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==2){
						soma++;
						soma1++;
					}
					printf("\nEsteve trabalhando por pelo menos 1 ano (12 meses) nesses últimos 3 anos (36 meses)\n%c ",272);
					scanf("%d",&requisitos);
					if(requisitos==1){
						soma++;
						soma1++;
					}
					if(soma==6||soma1==4){
						system("clear||cls");
						printf("---------------------------------------------------------------------------\n");
						printf("     O usuário atende aos requisitos para receber o Seguro-Desemprego");
						printf("\n---------------------------------------------------------------------------\n");
						printf("\nComplete as informções abaixo para o calculo de parcelas e valor a receber:\n");
						printf("\nQuantos meses trabalhados nos ultimos 36 meses? [insira um valor inteiro]\n%c",272);
						scanf("%d",&tipoBeneficio);
						system("clear||cls");
						//Solicitando dados de salário
						printf("\nEm seu último vinculo empregatício, trabalhou quantos meses remunerado? de 1(mínimo) a 3(máximo)??\n%c",272);
						scanf("%d",&requisitos);
						system("clear||cls");
						printf("Informe os valores solicitados abaixo:\nsalário do último mês?\n%c",272);
						scanf("%f",&salario01);
						switch(requisitos){
						case 1:
							if (salario01<1686.80)
								salario01=(salario01*0.80);							
							else if(salario01<2811.61)
								salario01=((salario01-1686.79)*0.5+1349.43);
							else{
								salario01=1911.84;
							}
							salario=salario01;
							break;
							if (salario<1100.00)
								salario=1100.00;
							
						case 2:
							printf("Salário do penúltimo mês?\n%c",272);
							scanf("%f",&salario02);
							salario02=(salario01+salario02)/2;
							if (salario02<1686.80)
								salario02=(salario02*0.80);							
							else if(salario02<2811.61)
								salario02=((salario02-1686.79)*0.5+1349.43);
							else{
								salario02=1911.84;
							}
							salario=salario02;
							if (salario<1100.00)
								salario=1100.00;
							break;
						case 3:
							printf("Salário do penúltimo mês?\n%c",272);
							scanf("%f",&salario02);
							printf("Salário do antepenúltimo mês?\n%c",272);
							scanf("%f",&salario03);
							salario03=(salario01+salario02+salario03)/3;
							if (salario03<1686.80)
								salario03=(salario03*0.80);							
							else if(salario03<2811.61)
								salario03=((salario03-1686.79)*0.5+1349.43);
							else{
								salario03=1911.84;
							}
							salario=salario03;
							if (salario<1100.00)
								salario=1100.00;
							break;
						}
						//Escolher a quantidade de parcelas
						switch(tipoBeneficio){
							case 6 ... 11: //três parcelas
								soma=3;
								break;
							case 12 ... 23://quatro parcelas
								soma=4;
								break;
							case 0 ... 5:  //quantidade invalida
								printf("\nQuantidade de meses inferior a 6 \n");
								break;
							default:     //cinco parcelas
								soma=5;
								break;
						}
						system("clear||cls");
						printf("\nPara os dados Informados o beneficio será de %d parcelas de R$ %.2f no total de R$ %.2f.\n",soma,salario,soma*salario);
						printf("--------------------------------------------------------------------------------------------\n");
					}
					else{
						system("clear||cls");
						printf("----------------------------------------------------------------------\n");
						printf("O usuário NÃO atende aos requisitos para receber o Seguro-Desemprego");
						printf("\n----------------------------------------------------------------------");
						break;
					}		
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
				//https://www.gov.br/trabalho/pt-br/assuntos/trabalhador/seguro-desemprego/seguro-desemprego-empregado-domestico
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
					printf("\nDe acordo com a Lei n.º 10.208 de 23 de março de 2001 e pela Lei Complementar nº 150, de 02 de junho de 2014.\n");
					printf("\nVocê tem direito à 3 parcelas no valor de R$ 1.100,00 no total de R$ 3.300,00 reais.");
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
					printf("\nDe acordo com a LEI Nº 10.779, DE 25 DE NOVEMBRO DE 2003.\n");
					printf("\nVocê tem direito ao benefício do seguro-desemprego durante o período de defeso de atividade pesqueira para a preservação da espécie com parcelas no valor de R$ 1.100,00.");
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
					printf("\nDe acordo com a Lei N'º' 10.608, DE 20 DE DEZEMBRO DE 2002.\n");
					printf("\nVocê tem direito à 3 parcelas no valor de R$ 1.100,00 no total de R$ 3.300,00 reais.");
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
				system("clear||cls");
				printf("\n Para receber o seguro-desemprego é necessário se enquadrar em uma das condições das opções de 1 a 5.\n");
				printf("---------------------------------------------------------------------------------------------------------");
				break;
			default:
				system("clear||cls");
				printf("\n          ########  Opção invalida  #######\n_______________________________________________________");					
				break;
		}
		printf("\n\n\n          Deseja realizar uma nova consulta?\n");
		printf("\n  %c Digite o número 1 para sim ou o número 2 para não:\n  %c ",272,272);
		scanf("%d",&tipoBeneficio);
		switch(tipoBeneficio){
			case 1:
				system("clear||cls");
				teste=true;
				soma=0;
				break;
			case 2:
				system("clear||cls");
				printf("\n\n\n\n\n\n\n        Agradecemos a preferência! \n\n\n\n\n\n\n");
				return (0);
				getch();
				break;
			default :
				teste=true;
				printf("\n          ########  Opção invalida  #######\n_______________________________________________________");
			break;
		}
	}while(teste==true);
}
