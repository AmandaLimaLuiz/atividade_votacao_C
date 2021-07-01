#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int joao = 0, maria = 0, ze = 0, nul= 0, nulo = 0,
	zureta = 0, gomes = 0, entrada,opcao, opcao2;
	
	while (entrada != 3){
		
		
		printf("\nDigite a opção desejada:\n1- Votar \n2- Apuração dos Votos\n3- Sair\n");
		scanf("%d", &entrada);
		
		system("cls");
		
		if (entrada == 1){
			printf("Digite sua intenção de voto para vereador\n\n");
			printf("111 - João de Frete\n222 - Maria da Pamonha\n333 - Zé da Farmacia\n444 - Voto Nulo\n");
			scanf("%d",&opcao);
			switch(opcao){
				case 111:
					joao = joao +1;
					break;
				case 222:
					maria = maria +1;
					break;
				case 333:
					ze = ze +1;
					break;
				case 444:
					nul= nul +1;
					break;
				default:
					printf("\nOpção Invalida, Seu voto foi anulado..\n");
					break;
							
			}
			
			printf("\nDigite sua intenção de voto para prefeito\n11 - Dr. Zureta\n22 - Senhor Gomes\n44 - Nulo\n");
			scanf("%d", &opcao2);
			switch(opcao2){
				case 11:
					zureta = zureta +1;
					break;
				case 22:
					gomes = gomes +1;
					break;
				case 44:
					nulo = nulo +1;
					break;
				default:
					printf("\nOpção Invalida, Seu voto foi anulado.\n");
					break;	
			}
		
		}
		
		
		if(entrada == 2){
			printf("\nApuração dos votos:\n\nVEREADORES:\n\n");
			printf("Joao do Frete: %d", joao);
			printf("\nMaria da Pamonha: %d",maria);
			printf("\nZé da Farmacia: %d",ze);
			printf("\nVotos Nulos: %d",nul);
			printf("\n\nPREFEITO:\n\nDr. Zureta %d",zureta);
			printf("\nSenhor Gomes: %d",gomes);
			printf("\nVotos Nulos: %d",nulo);
			printf("\n\n");
			
			
		}if(entrada == 3){
			printf("\nObrigado por votar\n");
		}
		
	
	}
			
	
}
