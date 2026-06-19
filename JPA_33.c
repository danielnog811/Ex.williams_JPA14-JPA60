# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826    *");
	printf("\n* Programa JPA-33: Múltiplos de 3 entre 1 e 30 *");
	printf("\n************************************************\n\n");

//Variáveis
	int numero;

//Leitura e Escrita
	printf("Múltiplos de 3 entre 1 e 30\n\n");

//Processamento e Resultados
	for(numero = 1; numero <= 30; numero++){
		if(numero % 3 == 0){
			printf("%d\n", numero);
		}
	}

	return 0;
}