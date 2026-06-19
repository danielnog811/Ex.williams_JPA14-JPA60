# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA - 48. Menu com opção de sair *");
	printf("\n*********************************************\n\n");

//Variáveis
	int opcao;

//Leitura e Escrita
	printf("Menu de opções\n");

	do{

		printf("\n========== MENU ==========\n");
		printf("1 - Mensagem\n");
		printf("2 - Sair\n");

		printf("\nEscolha uma opção: ");
		scanf("%d", &opcao);

	//Processamento e Resultados
		switch(opcao){

			case 1:
				printf("\nMensagem de Ex.!\n");
				break;

			case 2:
				printf("\nSaindo do programa...\n");
				break;

			default:
				printf("\nOpção inválida!\n");
		}

	}while(opcao != 2);

	return 0;
}