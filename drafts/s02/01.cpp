#include <stdio.h>
#include <math.h>

int main() 
{
	int x, pol;

	scanf("%d", &x);

	pol = 3 * pow(x, 3) - 5 * pow(x, 2) + 2 * x - 1;

	printf("polinomio de 3 com %d como x: %d\n", x, pol);

	return 0;
}