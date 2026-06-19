# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826    *");
	printf("\n* Programa JPA-50: Número positivo obrigatório *");
	printf("\n************************************************\n\n");

//Variáveis
	int numero;

//Leitura e Escrita
	printf("Informe um número positivo para depósito\n");

//Processamento e Resultados
	do{

		printf("\nDigite um número positivo: ");
		scanf("%d", &numero);

		if(numero <= 0){
			printf("\nValor inválido! Digite um número maior que zero.\n");
		}

	}while(numero <= 0);

	printf("\nNúmero válido informado: %d\n", numero);

	return 0;
}
