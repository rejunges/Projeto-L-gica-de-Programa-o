#include <stdio.h>

//Observações:

//Quando usar variáveis float(números com vírgula), devemos usar o %f
//Quando usar variáveis int(números inteiros), devemos usar o %d
//Se for um valor float, devemos usar o "ponto" , não a "virgula. Ex: 3.14 é correto mas 3,14 está errado.
//Foi usado no último printf " %.2f ", esse .2 significa que só serão mostradas 2 casas decimais.

int main(){
	float salario, valor_hora;
	int num_horas;
	
	printf ("Informe o número de horas trabalhas por dia:");
	scanf ("%d", &num_horas);
	
	printf ("Informe o valor da hora:");
	scanf ("%f", &valor_hora);
	
	salario= num_horas*valor_hora*30;
	
	printf ( "O salário mensal do funcionário é: %.2f", salario);
	return 0;
}
	

