#include <stdio.h>

int main(){
	int A[10],i, cont;
	
	printf ("Informe as idades:\n\n");
	
	for (i=0; i<10; i++){
		printf ("%dº idade:", i+1);
		scanf ("%d", &A[i]);
		if (A[i]>35){
			cont++;
		}
	}
	if (cont!=0){
		printf ("\nExistem %d pessoas com idade superior a 35 anos.", cont);
	}else{
		printf ("\nNão existe ninguém com idade superior a 35 anos.");
	}
	return 0;
}
	
