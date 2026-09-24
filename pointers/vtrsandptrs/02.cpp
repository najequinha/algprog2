#include <stdio.h>
#define TAM 10
#define MAX 20

void leitura(int n, int v[TAM]) {
	int *p;

	for (p = &v[0]; p <= &v[n-1]; p++) {
		scanf("%d", p);
	}
}

void imprime(int n, int v[MAX]) {
	int *p;
	for (p = &v[0]; p <= &v[n-1]; p++) {
		printf("%d ", *p);
	}
}

void intercalacao(int m, int n, int v1[TAM], int v2[TAM], int inter[MAX]) {
	int *p, cont;
	cont = 0;
	for (p = &inter[0]; p <= &inter[m-2]; p+=2) {
		*p = v1[cont];
		*p++ = v2[cont];
		cont++;
	}
}


int main() {

	int n, m, v1[TAM], v2[TAM], inter[MAX];

	n = TAM;

	m = MAX;

	leitura(n, v1);

	leitura(n, v2);

	intercalacao(m, n, v1, v2, inter);

	imprime(m, inter);

	printf("\n");

	intercalacao(m, n, v2, v1, inter);

	imprime(m, inter);


	return 0;
}