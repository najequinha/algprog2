#include <stdio.h>
#define MAX 100

struct aluno{
	char nome[MAX];
	int matricula;
	double n1, n2;
}

int main() {
	int n;
	scanf("%d", &n);

	struct aluno alunos[n];

	for (int i = 0; i < n; i++) {
		scanf("%c %d %lf %lf", &alunos.nome[i], &alunos.matricula[i], &alunos.n1[i], &alunos.n2[i]);
	}



	for (int = i; i < n; i++) {
		printf("%d %c %.1lf\n", alunos.matricula[i], alunos.nome[i], (alunos.n1[i]+alunos.n2[i])/2);
	}


}