# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*****************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826         *");
	printf("\n* Programa JPA-37: Soma de números até digitar zero *");
	printf("\n*****************************************************\n\n");

//Variáveis
	float numero, soma;

//Leitura e Escrita
	printf("Somando números até que seja digitado zero\n\n");

	soma = 0;

//Processamento e Resultados
	while(numero != 0){

		printf("Informe um número (0 para encerrar): ");
		scanf("%f", &numero);

		soma = soma + numero;
	}

	printf("\nResultado: A soma dos valores é %.2f\n", soma);

	return 0;
}