#include <stdio.h>

int main() {
	
    int i, valor;

    printf("Digite um numero de 1 e 10: ");
    scanf("%d", &valor);
    
    while (valor < 1 || valor > 10) {
    	
        printf("O numero precisa ser entre 1 e 10: ");
        scanf("%d", &valor);
    }

    for (i = 1; i <= 10; i++) {
    	
        printf("%d x %d = %d\n", valor, i, valor * i);
    }

    return 0;
}

