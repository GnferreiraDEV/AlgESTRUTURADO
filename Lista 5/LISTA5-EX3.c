#include <stdio.h>

int main() {
	
    int Q[20], menor, p;
    int i;

    for (i = 0; i < 20; i++) {
    	
        do {
            printf("Digite um numero para o vetor[%d]: ", i);
            scanf("%d", &Q[i]);
            
        } while (Q[i] < 0);
    }

    menor = Q[0];
    
    p = 0;

    for (i = 1; i < 20; i++) {
    	
        if (Q[i] < menor) {
        	
            menor = Q[i];
            
            p = i;
        }
    }

    printf("Menor elemento: %d na posicao %d\n", menor, p);
    
    return 0;
}
