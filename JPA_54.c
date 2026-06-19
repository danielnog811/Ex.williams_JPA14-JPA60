# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n***********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826   *");
	printf("\n* Programa JPA-54: Validar número entre 1 e 5 *");
	printf("\n***********************************************\n\n");

//Variáveis
	int numero;

//Leitura e Escrita
	printf("Validação de número entre 1 e 5\n");

//Processamento e Resultados
	do{

		printf("\nDigite um número entre 1 e 5: ");
		scanf("%d", &numero);

		if(numero < 1 || numero > 5){
			printf("\nValor inválido! Tente novamente.\n");
		}

	}while(numero < 1 || numero > 5);

	printf("\nNúmero válido informado: %d\n", numero);

	return 0;
}
