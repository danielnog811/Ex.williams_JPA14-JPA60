# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
int main (){
	system ("chcp 65001 > nul");
	setlocale (LC_ALL, "pt_BR.UTF-8");
printf("\n*************************************************************");
printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826                 *");
printf("\n* Programa JPA-15 - Quantas Caixas Cabem Dentro do Caminhão *");
printf("\n*************************************************************\n\n\n");


//Variaveis
	float VCT,VCL,VCC,VCH,VCX,CXL,CCX,HCX,VT;
	
//leitura e Escrita
	//Dimenções do Caminhão
    printf("Quantas Caixas Cabem Dentro do Caminhão\n");
	printf("\nInforme a Largura do Caminhão: ");
	scanf("%f", &VCL);
	printf("\nInforme a Comprimento do Caminhão: ");
	scanf("%f", &VCC);
	printf("\nInforme o Altura do Caminhão: ");
	scanf("%f", &VCH);
	
	//Dimenções da Caixa
	printf("\nInforme a Largura da Caixa: ");
	scanf("%f", &CXL);
	printf("\nInforme a Comprimento da Caixa: ");
	scanf("%f", &CCX);
	printf("\nInforme o Altura da Caixa: ");
	scanf("%f", &HCX);
	
	
//Processamento
	VCT= VCL * VCC * VCH;
	VCX= CXL * CCX* HCX;
	VT= VCT/VCX;
	
//Resultados
	printf("\nResultado: Cabem %.1f caixas", VT);
	
	return 0;
	}