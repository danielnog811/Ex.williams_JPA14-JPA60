# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n******************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826          *");
	printf("\n* Programa JPA-16 - Múltiplo de 3 e/ou 5            *");
	printf("\n******************************************************\n\n");

//Variáveis
	int pedido;

//Leitura e Escrita
	printf("Promoção da Lanchonete\n");
	printf("\nInforme o número do pedido: ");
	scanf("%d", &pedido);

//Processamento e Resultados
	if(pedido % 3 == 0 && pedido % 5 == 0){
		printf("\nResultado: O cliente ganhou um refrigerante e uma sobremesa.");
	}else if(pedido % 3 == 0){
		printf("\nResultado: O cliente ganhou um refrigerante.");
	}else if(pedido % 5 == 0){
		printf("\nResultado: O cliente ganhou uma sobremesa.");
	}else{
		printf("\nResultado: O cliente não ganhou nenhum brinde.");
	}

	return 0;
}