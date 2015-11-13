#include <stdio.h>

 int isPositivo (int x){
	 if (x >=0){
		 return 1;
	 }
	 else{
		 return 0;
	 }
 }
 
 int main(){
	 int num;
	 
	 printf ("Informe um número:\n");
	 scanf ("%d", &num);
	 
	 if (isPositivo(num)){
		 printf ("É um número positivo");
	 }else{
		 printf ("É um número negativo");
	 }
	 return 0;
 }
	 
 
 
