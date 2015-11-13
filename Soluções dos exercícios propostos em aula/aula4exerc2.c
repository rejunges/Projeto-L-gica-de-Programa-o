#include <stdio.h>

int main(){
	float libras, dolar;
	int opc;
	
	do{
		printf ("\nInforme um quantia de dinheiro em libras:");
		scanf ("%f",&libras);
		
		dolar= 1.84*libras;
		
		printf ("Esse valor equivale a %.2f dólares\n\n", dolar);
		printf ("Deseja transformar mais algum valor ? \n(1) Sim\n(2)Não\n");
		scanf ("%d", &opc);
	}while (opc==1);
	
	return 0;
}
