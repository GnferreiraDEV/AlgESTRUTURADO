#include <stdio.h>

int main() {
	
    float satual, preajuste, vreajuste, salarioN;

    printf("Salário mensal atual: ");
    scanf("%f", &satual);

    printf("Porcentagem do reajuste (em %%): ");
    scanf("%f", &preajuste);

    vreajuste = (preajuste / 100) * satual;

    salarioN = satual + vreajuste;

    printf("O saário reajustado é: %.2f\n", salarioN);

    return 0;
}

