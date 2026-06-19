# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n************************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826                *");
	printf("\n* Programa JPA-42: Quantidade de números ímpares digitados *");
	printf("\n************************************************************\n\n");

//Variáveis
	int numero, contador, impares;

//Leitura e Escrita
	printf("Contando a quantidade de números ímpares\n\n");

	contador = 1;
	impares = 0;

//Processamento e Resultados
	while(contador <= 10){

		printf("Informe o %dº número: ", contador);
		scanf("%d", &numero);

		if(numero % 2 != 0){
			impares++;
		}

		contador++;
	}

	printf("\nResultado: Foram digitados %d números ímpares.\n", impares);

	return 0;
}