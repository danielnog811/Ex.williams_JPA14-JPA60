# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-47: Tabuada de um número     *");
	printf("\n*********************************************\n\n");

//Variáveis
	int numero, contador, resultado;

//Leitura e Escrita
	printf("Tabuada de um número utilizando while\n\n");

	printf("Informe um número: ");
	scanf("%d", &numero);

	contador = 1;

//Processamento e Resultados
	while(contador <= 10){

		resultado = numero * contador;

		printf("%d x %d = %d\n", numero, contador, resultado);

		contador++;
	}

	return 0;
}
