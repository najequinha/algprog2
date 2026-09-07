#include <stdio.h>
#include <math.h>

int main() {
	int n1, n2, soma, i;

	scanf("%d %d", &n1, &n2);

	soma = 0;

	for (i = n1; i<=n2; i++) {
		if (i % 2 != 0) 
			soma += i;
	}

	printf("%d\n", soma);



	return 0;
}