# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-22 - Par ou Ímpar            *");
	printf("\n*********************************************\n\n");

//Variáveis
	int numero;
	char resposta;

//Leitura e Escrita
	printf("Verificando se um número é par ou ímpar\n");

	do{
		printf("\nInforme um número inteiro: ");
		scanf("%d", &numero);

//Processamento e Resultados
		if(numero % 2 == 0){
			printf("\nResultado: O número é par.\n");
		}else{
			printf("\nResultado: O número é ímpar.\n");
		}

		printf("\nDeseja realizar outro teste? (S/N): ");
		scanf(" %c", &resposta);
		printf("\n");

	}while(resposta == 'S' || resposta == 's');

	return 0;
}