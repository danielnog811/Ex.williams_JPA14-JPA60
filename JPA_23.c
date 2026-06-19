# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-23 - Maior de Dois Números   *");
	printf("\n*********************************************\n\n");

//Variáveis
	int numero1, numero2;
	char resposta;

//Leitura e Escrita
	printf("Verificando qual é o maior número\n");

	do{
		printf("\nInforme o primeiro número: ");
		scanf("%d", &numero1);

		printf("Informe o segundo número: ");
		scanf("%d", &numero2);

//Processamento e Resultados
		if(numero1 > numero2){
			printf("\nResultado: O maior número é %d.\n", numero1);
		}else if(numero2 > numero1){
			printf("\nResultado: O maior número é %d.\n", numero2);
		}else{
			printf("\nResultado: Os números são iguais.\n");
		}

		printf("\nDeseja realizar outro teste? (S/N): ");
		scanf(" %c", &resposta);
		printf("\n");

	}while(resposta == 'S' || resposta == 's');

	return 0;
}