#include <stdio.h>
#define MAX 100

void leitura(int n, int v[MAX]);
void imprime(int n, int v[MAX]);


int main() {
	int n, v[MAX];

	scanf("%d", &n);

	printf("numeros: \n");

	leitura(n, v);

	imprime(n, v);

	return 0;
}

void leitura(int n, int v[MAX]) {
	int *p;
	for (p = &v[0]; p < &v[0] + n; p++) {
		scanf("%d", p);
	}
}

void imprime(int n, int v[MAX]) {
	int *p;
	for (p = &v[n-1]; p >= &v[0]; p--) {
		printf("%d ", *p);
	}
}