#include <stdio.h>

int main(){
	int cod, quantidade;
	float valor;
	
	printf ("\t\tCARDÁPIO:\n\n");
	printf ("Cachorro Quente ... 100.....R$ 1,20\n");
	printf ("Bauru Simples ..... 101.....R$ 1,30\n");
	printf ("Bauru com ovo ..... 102.....R$ 1,50\n");
	printf ("Hambúrguer ........ 103.....R$ 1,20\n");
	printf ("Cheeseburguer ..... 104.....R$ 1,30\n");
	printf ("Refrigerante ...... 105.....R$ 1,00\n\n");
	printf ("Informe o código do pedido: ");
	scanf ("%d", &cod);
	
	if (cod>=100 && cod<=105){
		printf ("Quantidade: ");
		scanf ("%d",&quantidade);
		 
		switch (cod){
			case 100:
				valor= quantidade*1.20;
				break;
			case 101:
				valor= quantidade*1.30;
				break;
			case 102:
				valor= quantidade*1.50;
				break;
			case 103:
				valor= quantidade*1.20;
				break;
			case 104:
				valor= quantidade*1.30;
				break;
			case 105:
				valor = quantidade*1;
				break;
			}
		printf ("Valor:%.2f", valor);			
	}
	else{
		printf ("Código inexistente");
	}
		
	return 0;
}
