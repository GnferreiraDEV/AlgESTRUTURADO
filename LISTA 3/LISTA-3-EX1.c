#include <stdio.h>

int main() {
	
	
    float n1, n2;

    printf("Digite o primeiro numero: ");
    
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    
    scanf("%f", &n2);

    while (n2 == 0) {
    	
        printf("O valor atribuido ao segundo numero precisa ser diferente de ZERO: ");
        
        scanf("%f", &n2);
    }

    printf("Resultado da divisao: %.2f\n", n1 / n2);

    return 0;
}

