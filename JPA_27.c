# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-27 - Tabuada de um Número    *");
	printf("\n*********************************************\n\n");

//Variáveis
	int numero, contador;
	char resposta;

//Leitura e Escrita
	printf("Exibindo a tabuada de um número\n");

	do{
		printf("\nInforme um número: ");
		scanf("%d", &numero);

//Processamento e Resultados
		printf("\nTabuada do %d:\n\n", numero);

		for(contador = 1; contador <= 10; contador++){
			printf("%d x %d = %d\n", numero, contador, numero * contador);
		}

		printf("\nDeseja realizar outro teste? (S/N): ");
		scanf(" %c", &resposta);
		printf("\n");

	}while(resposta == 'S' || resposta == 's');

	return 0;
}