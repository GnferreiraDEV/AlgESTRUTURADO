#include <stdio.h>

void frac(float num, int *inteiro, float *frac) {
	
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main() {
	
    float num, fracao;
    int parteInteira;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    frac(num, &parteInteira, &fracao);

    printf("INTEIRO: %d\n", parteInteira);
    printf("FRACAO : %.2f\n", fracao);

    return 0;
}
