#include <stdio.h>

int main() {
	
    float n1, n2, media;

    printf("Digite sua primeira nota 1a: ");
    scanf("%f", &n1);
    
    while (n1 < 0 || n1 > 10) {
        printf("O valor precisa ser de 0 a 10.: ");
        scanf("%f", &n1);
    }

    printf("Digite sua segunda nota 2a: ");
    scanf("%f", &n2);
    
    while (n2 < 0 || n2 > 10) {
        printf("O valor precisa ser de 0 a 10: ");
        scanf("%f", &n2);
    }

 
	media = (n1 + n2) / 2;
	
    printf("Media simples eh: %.2f\n", media);

    return 0;
}

