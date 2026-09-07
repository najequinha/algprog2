#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;

	double x, x1, x2, delta, raiz;

	scanf("%d %d %d", &a, &b, &c);

	delta = b * b - 4 * a * c;


	if (delta < 0) 
		printf("A equação não possui raízes reais\n");

	

	else if (delta == 0) {
		raiz = sqrt(delta);

		x = (-b + raiz)/(2.0 * a);

		printf("%.2lf\n", x);
	}

	else {
		raiz = sqrt(delta);

		x1 = (-b + raiz)/(2.0 * a);

		x2 = (-b - raiz)/(2.0 * a);

		printf("%.2lf, %.2lf\n", x2, x1);
	}

	return 0;
}