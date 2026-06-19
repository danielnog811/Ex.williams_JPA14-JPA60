# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826     *");
	printf("\n* Programa JPA-56 . O Menu do Fast-Food Digital *");
	printf("\n*************************************************\n\n");

//Variáveis
	int opcao;

//Leitura e Escrita
	printf("Escolha um dos combos disponíveis\n");

	printf("\n1 - Combo Hambúrguer + Batata + Refri");
	printf("\n2 - Combo Pizza Brotinho + Refri");
	printf("\n3 - Combo Salada + Suco Natural");
	printf("\n4 - Combo Balde de Frango + Molho");

	printf("\n\nDigite a opção desejada: ");
	scanf("%d", &opcao);

//Processamento e Resultados
	switch(opcao){

		case 1:
			printf("\nCombo Hambúrguer + Batata + Refri - R$ 30,00\n");
			break;

		case 2:
			printf("\nCombo Pizza Brotinho + Refri - R$ 25,00\n");
			break;

		case 3:
			printf("\nCombo Salada + Suco Natural - R$ 22,00\n");
			break;

		case 4:
			printf("\nCombo Balde de Frango + Molho - R$ 35,00\n");
			break;

		default:
			printf("\nOpção inválida! Escolha de 1 a 4.\n");
	}

	return 0;
}
