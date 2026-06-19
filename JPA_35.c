# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n****************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826        *");
	printf("\n* Programa JPA-35: Números de Fibonacci (n termos) *");
	printf("\n****************************************************\n\n");

//Variáveis
	int n, contador;
	int termo1, termo2, proximo;
	char resposta;

//Leitura e Escrita
	printf("Exibindo os primeiros termos da sequência de Fibonacci\n");

	do{
		printf("\nInforme a quantidade de termos: ");
		scanf("%d", &n);

		termo1 = 0;
		termo2 = 1;

	//Processamento e Resultados
		printf("\nSequência de Fibonacci:\n");

		for(contador = 1; contador <= n; contador++){

			printf("%d ", termo1);

			proximo = termo1 + termo2;
			termo1 = termo2;
			termo2 = proximo;
		}

		printf("\n");

		printf("\nDeseja realizar outro teste? (S/N): ");
		scanf(" %c", &resposta);
		printf("\n");

	}while(resposta == 'S' || resposta == 's');

	return 0;
}