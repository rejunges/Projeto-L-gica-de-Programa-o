#include <stdio.h>

int main(){
	float altura, peso, IMC;
	
	printf ("Informe a altura(em metros):");
	scanf ("%f", &altura);
	
	printf ("Informe o peso(em KG):");
	scanf ("%f", &peso);
	
	IMC=   peso / (altura*altura);
	
	printf ("O IMC é: %.2f", IMC);
	
	return 0;
}
