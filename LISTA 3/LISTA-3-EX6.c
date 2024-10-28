#include <stdio.h>

int main() {
	
    char resposta;
    do {
        float n1, n2, media;

        printf("Digite sua primeira nota 1a: ");
        scanf("%f", &n1);
        
        while (n1 < 0 || n1 > 10) {
            printf("Digite novamente (0 a 10): ");
            scanf("%f", &n1);
        }

        printf("Digite sua primeira nota 2a: ");
        scanf("%f", &n2);
        
        while (n2 < 0 || n2 > 10) {
            printf("Digite novamente (0 a 10): ");
            scanf("%f", &n2);
        }

        media = (n1 + n2) / 2;
        
        printf("Media do aluno: %.2f\n", media);

        printf("NOVO CALCULO (S/N)? ");
        scanf(" %c", &resposta);
    } while (resposta == 'S');

    return 0;
}

