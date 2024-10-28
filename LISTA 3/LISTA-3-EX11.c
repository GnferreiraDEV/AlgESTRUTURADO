#include <stdio.h>

int main() {
	
    int N, i;

    do {
        printf("Digite um valor maior que zero: ");
        scanf("%d", &N);
        
        if (N <= 0) {
            printf("Valor invalido. ");
        }
        
    } while (N <= 0);

    for ( i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}

