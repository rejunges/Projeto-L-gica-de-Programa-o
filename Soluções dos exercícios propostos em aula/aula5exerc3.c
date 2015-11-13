#include <stdio.h>

int main(){
	int A[10], i, contPares=0;
	
	printf ("Vetor A:\n\n");
	
	for (i=0; i<10; i++){
		printf ("%d elemento:", i+1);
		scanf ("%d", &A[i]);
	}
	
	for (i=0; i<10; i++){
		if (A[i]%2 == 0){
			contPares++;
		}
	}
	printf ("\nExistem %d elementos pares nesse vetor.", contPares);
	
	return 0;
}
