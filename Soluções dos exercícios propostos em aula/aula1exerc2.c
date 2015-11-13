#include <stdio.h>

int main(){
	float produto_reais, dolares, taxa;
	
	printf ("Informe o valor do produto em reais:");
	scanf ("%f", &produto_reais);
	
	printf ("Informe a taxa de conversão para o dólar:");
	scanf ("%f", &taxa);
	
	dolares = taxa*produto_reais;
	
	printf ("O produto custa: %.2f dólares", dolares);
	
	return 0;
}
	
	
