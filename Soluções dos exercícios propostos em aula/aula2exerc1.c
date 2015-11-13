#include <stdio.h>

int main(){
	float nota1, nota2, nota3, media;
	
	printf ("Informe as 3 notas do aluno:\n");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	
	media= (nota1+nota2+nota3)/3;
	
	if (media>=7){
		printf("APROVADO");
	}
	else{
		printf("REPROVADO");
	}

	return 0;
}

