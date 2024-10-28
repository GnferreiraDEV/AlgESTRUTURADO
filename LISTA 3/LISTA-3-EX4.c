#include <stdio.h>

int main() {
	
    float n1, n2;

    printf("Digite o primeiro numero: ");
    
    scanf("%f", &n1);

    do {
        printf("Digite o segundo numero: ");
        
        scanf("%f", &n2);

        if (n2 == 0) {
            printf("O numero precisa ser diferente de ZERO. ");
        }
    } while (n2 == 0);

    printf("Resultado da divisao: %.2f\n", n1 / n2);

    return 0;
}

