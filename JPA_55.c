# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*************************************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826                             *");
	printf("\n* Programa JPA-55: Ler números e mostrar o maior (até digitar negativo) *");
	printf("\n*************************************************************************\n\n");

//Variáveis
	int numero, maior;

//Leitura e Escrita
	printf("Leitura de números positivos até digitar um negativo\n");

	maior = 0;

//Processamento e Resultados
	do{

		printf("\nDigite um número: ");
		scanf("%d", &numero);

		if(numero > maior){
			maior = numero;
		}

	}while(numero >= 0);

	printf("\nResultado: O maior número positivo informado foi %d.\n", maior);

	return 0;
}