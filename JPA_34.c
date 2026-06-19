# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n***************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826       *");
	printf("\n* Programa JPA-34: Verificar se um número é primo *");
	printf("\n***************************************************\n\n");

//Variáveis
	int numero, contador, divisores;
	char resposta;

//Leitura e Escrita
	printf("Verificando se um número é primo\n");

	do{
		printf("\nInforme um número inteiro: ");
		scanf("%d", &numero);

		divisores = 0;

	//Processamento e Resultados
		for(contador = 1; contador <= numero; contador++){
			if(numero % contador == 0){
				divisores++;
			}
		}

		if(numero > 1 && divisores == 2){
			printf("\nResultado: O número é primo.\n");
		}else{
			printf("\nResultado: O número não é primo.\n");
		}

		printf("\nDeseja realizar outro teste? (S/N): ");
		scanf(" %c", &resposta);
		printf("\n");

	}while(resposta == 'S' || resposta == 's');

	return 0;
}
