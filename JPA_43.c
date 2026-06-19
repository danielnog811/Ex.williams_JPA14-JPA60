# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826     *");
	printf("\n* Programa JPA-43: Soma dos pares entre 1 e 100 *");
	printf("\n*************************************************\n\n");

//Variáveis
	int numero, soma;

//Leitura e Escrita
	printf("Somando os números pares entre 1 e 100\n\n");

	numero = 2;
	soma = 0;

//Processamento e Resultados
	while(numero <= 100){

		printf("%d + %d = %d\n", soma, numero, soma + numero);

		soma = soma + numero;

		numero = numero + 2;
	}

	printf("\nResultado Final: %d\n", soma);

	return 0;
}
