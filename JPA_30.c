# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-30: Fatorial de um número    *");
	printf("\n*********************************************\n\n");

//Variáveis
	int numero, contador;
	int fatorial;
	char resposta;

//Leitura e Escrita
	printf("Calculando o fatorial de um número\n");

	do{
		printf("\nInforme um número inteiro positivo: ");
		scanf("%d", &numero);

	//Processamento
		if(numero < 0){
			printf("\nFatorial não existe para números negativos.\n");
		}else{
			fatorial = 1;

			for(contador = 1; contador <= numero; contador++){
				fatorial *= contador;
			}

		//Resultados
			printf("\nResultado: %d! = %d\n", numero, fatorial);
		}

		printf("\nDeseja realizar outro teste? (S/N): ");
		scanf(" %c", &resposta);
		printf("\n");

	}while(resposta == 'S' || resposta == 's');

	return 0;
}