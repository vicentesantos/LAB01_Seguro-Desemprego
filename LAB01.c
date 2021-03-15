#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char tipoBeneficio;
	bool teste;
	
	printf("Descubra se voçê tem direito ao benefício do Seguro-Desemprego\n");
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
		printf("______________________________________________________________\n");
		scanf("%d",&tipoBeneficio);
		system("clear||cls");
		switch(tipoBeneficio){
			teste=false;
			case 1:
				printf("Você escolheu: %d",tipoBeneficio);
				break;
			case 2:
				printf("Você escolheu: %d",tipoBeneficio);
				break;
			case 3:
				printf("Você escolheu: %d",tipoBeneficio);
				break;
			case 4:
				printf("Você escolheu: %d",tipoBeneficio);
				break;
			case 5:
				printf("Você escolheu: %d",tipoBeneficio);
				break;
			case 6:
				printf("Você escolheu: %d",tipoBeneficio);
				break;
			default:
				printf("\n ####Opção invalida, deseja tentar novamente?####\n");
				printf("\nDigite o número 1 para sim ou o número 2 para não:\n");
				scanf("%d",&tipoBeneficio);
				if(tipoBeneficio==1){
					system("clear||cls");
					teste=true;
				}	
				else{
					system("clear||cls");
					printf("\n\n\n\n\n\n\n       %c%c%c%c Agradecemos a preferência! %c%c%c%c\n\n\n\n\n\n\n", 259,3,259,3,259,3,259,3);
					return (0);
				}
					
				break;
		}
	}while(teste==true);
	return (0);
}
