#include <stdio.h>

int main(){
	int A[5], B[5], i;
	
	printf ("Vetor A:\n\n");
	for (i=0; i<5; i++){
		printf ("%d valor:", i+1);
		scanf ("%d", &A[i]);
	}
	
	for (i=0; i<5; i++){
		B[i]= A[i]*A[i];
	}
	printf ("\nVetor B:\n\n");
	
	for (i=0; i<5; i++){
		printf ("%d\n", B[i]);
	}
	
	return 0;
}
