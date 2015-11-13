#include <stdio.h>


int main(){
	int i, cont2, cont3, cont5, cont2_3_5;
	
	cont2=0;
	cont3=0;
	cont5=0;
	cont2_3_5=0;
	
	for (i=1; i<=100; i++){
		if (i%2==0){
			cont2++; 
		}
		if (i%3==0){
			cont3++;
		}
		if (i%5==0){
			cont5++;
		}
		if (i%2==0 && i%3==0 && i%5==0){
			cont2_3_5++;
		}
	}
	printf ("\tSobre os números de 1 a 100:\n\n");
	printf ("Existem %d números que são divisíveis por 2.\n", cont2);
	printf ("Existem %d números que são divisíveis por 3.\n", cont3);
	printf ("Existem %d números que são divisíveis por 5.\n", cont5);
	printf ("Existem %d números que são divisíveis por 2 , por 3 e por 5 ao mesmo tempo.\n", cont2_3_5);
	
	return 0;
}
		
	
