# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-45: Menu até escolher sair   *");
	printf("\n*********************************************\n\n");

//Variáveis
	int opcao;

//Leitura e Escrita
	printf("Caixa eletrônico simples\n");

	do{

		printf("\n========== MENU ==========\n");
		printf("1 - Saldo\n");
		printf("2 - Saque\n");
		printf("3 - Depósito\n");
		printf("4 - Sair\n");

		printf("\nEscolha uma opção: ");
		scanf("%d", &opcao);

	//Processamento e Resultados
		switch(opcao){

			case 1:
				printf("\nVocê escolheu a opção Saldo.\n");
				break;

			case 2:
				printf("\nVocê escolheu a opção Saque.\n");
				break;

			case 3:
				printf("\nVocê escolheu a opção Depósito.\n");
				break;

			case 4:
				printf("\nEncerrando o sistema...\n");
				break;

			default:
				printf("\nOpção inválida!\n");
		}

	}while(opcao != 4);

	return 0;
}
