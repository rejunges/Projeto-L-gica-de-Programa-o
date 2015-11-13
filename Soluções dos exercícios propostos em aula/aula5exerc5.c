#include <stdio.h>

int main(){
	int A[10],i, menor, maior, indiceMenor, indiceMaior;
	
	printf ("Informe as idades:\n\n");
	
	for (i=0; i<10; i++){
		printf ("%dº idade:", i);
		scanf ("%d", &A[i]);
	}
	// Vamos supor que o elemento 0 é o maior e o menor elemento do vetor, apenas para conseguirmos comparar os elementos
	maior=A[0];
	indiceMaior=0;
	menor=A[0];
	indiceMenor=0;
	
	//Vetor começa a ser lido do elemento 1 para compararmos com o 0, primeiramente.
	for (i=1; i<10; i++){
		if (A[i]>maior){
			maior=A[i];
			indiceMaior=i;
		}
		if (A[i]<menor){
			menor=A[i];
			indiceMenor=i;
		}
	}
	printf ("\nMenor idade: %d.\nÍndice:%d\n", menor, indiceMenor);
	printf ("\nMaior idade: %d.\nÍndice:%d", maior, indiceMaior);
	
	return 0;
} 
