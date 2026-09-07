#include <stdio.h>
#define MAX 50

void mediaAR(float media, float notaAP, char mensagem[MAX]) {
	if (media < notaAP) {
		printf("%.1f Reprovado\n", media);
	}

	else {
		printf("%.1f Aprovado\n", media);
	}

}

int main()
{
	float notaAp, media_e;
	scanf("%f %f", &notaAp, &media_e);
	
	char msg[MAX] = "MENSAGEM";

	mediaAR(media_e, notaAp, msg);

	
	return 0;
}