# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-21 - Positivo ou Negativo    *");
	printf("\n*********************************************\n\n");

//Variáveis
	float numero;
	char resposta;

//Leitura e Escrita
	printf("Verificando se um número é positivo, negativo ou zero\n");
	do{
		printf("\nInforme um número: ");
		scanf("%f", &numero);

//Processamento e Resultados
		if(numero > 0){
			printf("\nResultado: O número é positivo.\n");
		}else if(numero < 0){
			printf("\nResultado: O número é negativo.\n");
		}else{
			printf("\nResultado: O número é zero.\n");
		}

		printf("\nDeseja realizar outro teste? (S/N): ");
		scanf(" %c", &resposta);
		printf("\n");

	}while(resposta == 'S' || resposta == 's');

	return 0;
}