# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-36: Contar até 10 com while  *");
	printf("\n*********************************************\n\n");

//Variáveis
	int contador;

//Leitura e Escrita
	printf("Contagem de 1 até 10 utilizando while\n\n");

	contador = 1;

//Processamento e Resultados
	while(contador <= 10){
		printf("%d\n", contador);
		contador++;
	}

	return 0;
}