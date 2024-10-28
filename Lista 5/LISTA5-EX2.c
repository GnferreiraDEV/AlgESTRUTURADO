#include <stdio.h>

int main() {
	
    int Q[20], maior, p;
	int i;
	
    for ( i = 0; i < 20; i++) {
    	
        do {
        	
            printf("Digite um numero para o vetor[%d]: ", i);
            scanf("%d", &Q[i]);
            
        } while (Q[i] < 0);
    }

    maior = Q[0];
    
    p = 0;

    for (i = 1; i < 20; i++) {
    	
        if (Q[i] > maior) {
        	
            maior = Q[i];
            
            p = i;
        }
    }

    printf("Maior elemento: %d na posicaoo %d\n", maior, p);
    
    return 0;
}
