#include <stdio.h>

int main() {
	
	int i;
    int V1[15], V2[15], contador = 0;

    printf("Digite os numeros  V1:\n");
    
    for (i = 0; i < 15; i++) {
        scanf("%d", &V1[i]);
    }

    printf("Digite os numeros V2:\n");
    
    for (i = 0; i < 15; i++) {
        scanf("%d", &V2[i]);
    }


    for (i = 0; i < 15; i++) {
        if (V1[i] == V2[i]) {
            contador++;
        }
    }

    printf("Quantidade de números iguais nas mesmas pos: %d\n", contador);
    
    return 0;
}
