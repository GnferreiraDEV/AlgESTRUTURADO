#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *ARQ;
    long numero;
    int quantidade = 0;
    long maior_numero;

    
    ARQ = fopen("numeros.dat", "rb");

    if (ARQ == NULL) {

        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    
    maior_numero = -2147483647;

    while (fread(&numero, sizeof(long), 1, ARQ) == 1) {

        quantidade++;
        
        if (numero > maior_numero) {
            maior_numero = numero;
        }
    }

    
    fclose(ARQ);

    printf("1. A quantidade de numeros eh: %d\n", quantidade);
    printf("2. Omaior numero eh: %ld\n", maior_numero);

    return 0;
}