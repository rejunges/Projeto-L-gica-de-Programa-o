#include <stdio.h>

int isPositivo (int x){
	 if (x >=0){
		 return 1;
	 }
	 else{
		 return 0;
	 }
 }
 
void leInformacao(int x){
	if (x==1){
		printf ("É um número positivo");
	}
	else{
		printf ("É um número negativo");
	}
}

 int main(){
	 int num;
	 
	 printf ("Informe um número:\n");
	 scanf ("%d", &num);
	 
	 leInformacao( isPositivo(num) );
	  return 0;
 }
	 
