#include <stdio.h>

 
 int isDivisivel(int x, int y){
	 	 
	 if (x%y==0){
		 return 1;
	 }else{
		 return 0;
	 }
	 
 }
 
 int main(){
	 int x, y;
	 
	 
	 printf ("-----\t X é divisível por Y ? -----\n\n");
	 printf ("Informe x:\n");
	 scanf ("%d", &x);
	 printf ("Informe y:\n");
	 scanf ("%d", &y);
	 
	 if ( isDivisivel(x,y)){
		 printf ("X é divisível por Y.");
	 }else{
		printf ("X não é divisível por Y.");
	}
	return 0;
}
