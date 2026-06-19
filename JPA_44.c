# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826    *");
	printf("\n* Programa JPA-44: Contar dígitos de um número *");
	printf("\n************************************************\n\n");

//Variáveis
	int numero, contador;
	char resposta;

//Leitura e Escrita
	printf("Contando a quantidade de dígitos de um número\n");

	do{
		printf("\nInforme um número positivo: ");
		scanf("%d", &numero);

		contador = 0;

	//Processamento e Resultados
		if(numero == 0){
			contador = 1;
		}else{

			while(numero > 0){
				numero = numero / 10;
				contador++;
			}
		}

		printf("\nResultado: O número possui %d dígito(s).\n", contador);

		printf("\nDeseja realizar outro teste? (S/N): ");
		scanf(" %c", &resposta);
		printf("\n");

	}while(resposta == 'S' || resposta == 's');

	return 0;
}