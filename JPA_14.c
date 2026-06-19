# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main (){
	system ("chcp 65001 > nul");
	setlocale (LC_ALL, "pt_BR.UTF-8");
printf("\n*********************************************");
printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
printf("\n* Programa JPA-14 - Tipo de Triângulo       *");
printf("\n*********************************************\n\n\n");


//Variaveis
	float L1,L2,L3;
	
//leitura e Escrita
    printf("Descobrindo o Tipo de Triângulo\n");
	printf("\nInforme a medida do lado 1:");
	scanf("%f", &L1);
	printf("\nInforme a medida do lado 2:");
	scanf("%f", &L2);
	printf("\nInforme a medida do lado 3:");
	scanf("%f", &L3);
	
	
//Processamento e Resultados
	if(L1==L2 && L2==L3 && L1==L3){
  printf("\nSeu Triângulo é Equilátero.");
	}else if(L1==L2 || L1==L3 || L2==L3 ){
  printf("\nSeu Triângulo é Isósceles.");
	}else{
  printf("\nResultado: Seu Triângulo é Escaleno.");
	return 0;
	}
}