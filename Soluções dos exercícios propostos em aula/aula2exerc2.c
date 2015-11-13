#include <stdio.h>

//Opções de ordem:
//a<b<c
//a<c<b
//b<a<c
//b<c<a
//c<a<b
//c<b<a

int main(){
	int a, b, c;
	
	printf ("Informe 3 valores:\n");
	scanf ("%d %d %d", &a, &b, &c);
	
	printf ("\nA ordem crescente desses valores é:\n");
	
	if (a<b && b<c){
		printf ("%d %d %d", a,b,c );
	}else{
		 if(a<c && c<b){
			 printf ("%d %d %d", a,c,b);
		 }
		 else{
			 if(b<a && a<c){
				 printf ("%d %d %d", b,a,c);
			 }
			 else{
				 if (b<c && c<a){
					 printf ("%d %d %d", b,c,a);
				 }
				 else{
					 if (c<a && c<b){
						 printf ("%d %d %d", c,a,b);
					 }
					 else{
						 printf ("%d %d %d", c,b,a);
					 }
				 }
			 }
		 }
	 }
	 return 0;
}
	
	
