#include <stdio.h>

double calcSalario(double valorhora, int numHoras) {
	double sal;
	if (numHoras > 40) {
		int acima;
		acima = numHoras - 40;
		sal = (40 * valorhora) + (acima * valorhora * 1.5);
	}

	else {
		sal = valorhora * numHoras;
	}
	
	return sal;
}

int main() {

	int num, horas;
	float valor;

	scanf("%d %f %d", &num, &valor, &horas);

	float salario = calcSalario(valor, horas);

	printf("%d %d %.2f %.2f\n", num, horas, valor, salario);

	return 0;
}