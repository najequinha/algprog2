#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, perimetro, semip, area;


	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

	perimetro = a + b + c;

	semip = perimetro / 2;

	area = sqrt(semip * (semip - a) * (semip - b) * (semip - c));

	printf("Lados = %5.2f, %5.2f, %5.2f\n", a, b, c);
	printf("Perímetro = %5.2f\n", perimetro);
	printf("Área = %5.2f\n", area);

	return 0;
}