# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-53: Confirmar saída com 's'  *");
	printf("\n*********************************************\n\n");

//Variáveis
	char resposta;

//Leitura e Escrita
	printf("Sistema de cadastro\n");

//Processamento e Resultados
	do{

		printf("\n========== MENU ==========\n");
		printf("1 - Cadastrar\n");
		printf("2 - Consultar\n");
		printf("3 - Alterar\n");

		printf("\nOperação realizada com sucesso.\n");

		printf("\nDeseja sair do programa? (s para sair): ");
		scanf(" %c", &resposta);

	}while(resposta != 's' && resposta != 'S');

	printf("\nPrograma encerrado.\n");

	return 0;
}