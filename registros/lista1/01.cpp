#include <stdio.h>

struct aluno {
    char nome[40];
    int mat;
    float n1, n2;
};

int main () {
    int n;
    scanf("%d", &n);

    aluno alunos[n];

    for (int i = 0; i < n; i++) {
        scanf("%c %d %f %f", &alunos.nome[i], &alunos.mat[i], &alunos.n1[i], &alunos.n2[i]);

    }

    for (int i = 0; i < n; i++) {
        printf("%d %c %f", alunos.mat[i], alunos.nome[i], (alunos.n1[i] + alunos.n2[i])/2);
    }


    return 0;
}
