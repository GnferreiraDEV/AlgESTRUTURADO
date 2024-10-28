#include <stdio.h>

int main() {
    int numMercadorias = 0;
    float valor, somaTotal, media;
    char choice;

    do {
        printf("Digite o valor da mercadoria [%d]: ", numMercadorias + 1);
        scanf("%f", &valor);

        somaTotal += valor;
        numMercadorias++;

        printf("Mais mercadorias? [s/N] ", choice);
        scanf(" %c", &choice);
        printf("\n");

    } while (choice == 's' || choice == 'S');

    media = somaTotal / (float)numMercadorias;
    printf("\nValor total em Estoque: R$%.2f\nMédia de valor das mercadorias: %.2f\n", somaTotal, media);

    return 0;
}
