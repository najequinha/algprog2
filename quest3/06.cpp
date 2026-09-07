#include <stdio.h>

bool testetri(double a, double b, double c) {
	if (c * c == a * a + b * b) {
		return true;
	}
	else {
		return false;
	}

}


int main() {

	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);

	int valor = testetri(a, b, c);

	if (valor) {
		printf("%.1lf %.1lf %.1lf formam um triângulo retângulo\n", a, b, c);
	}

	else {
		printf("%.1lf %.1lf %.1lf não formam um triângulo retângulo\n", a, b, c);
	}

	return 0;
}