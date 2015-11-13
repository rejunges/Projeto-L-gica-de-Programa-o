#include <stdio.h>

//OBS: No vetor o primeiro elemento é sempre o 0. Se declararmos o vetor com 10 elementos, ele terá indice de 0 a 9.
int main (){
	int V[10],i;
	
	for (i=0; i<10; i++){
		printf ("Informe o %d número:", i+1);
		scanf ("%d", &V[i]);
		
	}
	
	printf ("\nVetor em ordem inversa:\n");
	for (i=9 ; i>=0; i--){
		printf ("%d\n", V[i]);
	}
	
	return 0;
}
	
	
