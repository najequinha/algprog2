#include <stdio.h>
#define TAM 100

int crescente(int v[TAM], int tam){
	int valor;
	for (int i = 0; i < tam - 1; i ++) {
		if (v[i] < v[i+1]){
			valor = 1;
		}
		else {
			valor = 0;
			return valor;
		}
	}
	return valor; 
}

int main() {
	int tam, res;

	scanf("%d", &tam);

	int v[tam];

	for (int j = 0; j < tam; j ++) {
		scanf("%d", &v[j]);
	}

	res = crescente(v, tam);

	if (res == 1){
		printf("verdadeiro\n");
	}

	else {
		printf("falso");
	}


	return 0;

}