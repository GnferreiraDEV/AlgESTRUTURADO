#include <stdio.h>

int main() {
    int numMercadorias, i = 1;
    float valor, somaTotal, media;

    printf("Digite o total de mercadorias no estoque: ");
    scanf("%d", &numMercadorias);

    while (i <= numMercadorias) {
        printf("Digite o valor da mercadoria [%d]: ", i);
        scanf("%f", &valor);

        somaTotal += valor;

        i++;
    }

    media = somaTotal / (float)numMercadorias;

    printf("\nValor total em Estoque: R$%.2f\nMédia de valor das mercadorias: %.2f\n", somaTotal, media);

    return 0;
}
