#include<stdio.h>

int main() {
	int numero,
    digito,
    temp,   
    quant; 

    scanf("%d %d", &numero, &digito);

    temp = numero;
    quant = 0;

    while (numero > 0) {
    	temp = numero % 10;
    	numero = numero / 10;
    	if (temp == digito)
    		quant += 1;
    }

   printf("%d\n", quant);

   return 0;

} 