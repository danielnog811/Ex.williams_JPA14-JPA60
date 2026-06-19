# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-40: Tabuada com while        *");
	printf("\n*********************************************\n\n");

//Variáveis
	int numero, contador;
	char resposta;

//Leitura e Escrita
	printf("Exibindo a tabuada de um número utilizando while\n");

	do{
		printf("\nInforme um número: ");
		scanf("%d", &numero);

		contador = 1;

	//Processamento e Resultados
		printf("\nTabuada do %d:\n\n", numero);

		while(contador <= 10){
			printf("%d x %d = %d\n", numero, contador, numero * contador);
			contador++;
		}

		printf("\nDeseja realizar outro teste? (S/N): ");
		scanf(" %c", &resposta);
		printf("\n");

	}while(resposta == 'S' || resposta == 's');

	return 0;
}