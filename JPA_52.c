# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826             *");
	printf("\n* Programa JPA-52: Soma até o número ser múltiplo de 10 *");
	printf("\n*********************************************************\n\n");

//Variáveis
	int numero, soma;

//Leitura e Escrita
	printf("Somando números até que seja digitado um múltiplo de 10\n");

	soma = 0;

//Processamento e Resultados
	do{

		printf("\nInforme um número: ");
		scanf("%d", &numero);

		soma = soma + numero;

	}while(numero % 10 != 0);

	printf("\nResultado: A soma total é %d.\n", soma);

	return 0;
}