#include <stdio.h>

int main() {
	
    float satual, preajuste, vreajuste, salarioN;

    printf("Sal�rio mensal atual: ");
    scanf("%f", &satual);

    printf("Porcentagem do reajuste (em %%): ");
    scanf("%f", &preajuste);

    vreajuste = (preajuste / 100) * satual;

    salarioN = satual + vreajuste;

    printf("O sa�rio reajustado �: %.2f\n", salarioN);

    return 0;
}

