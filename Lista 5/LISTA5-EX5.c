#include <stdio.h>

int main() {
	
    int numeros[20];
    int i;

    for (i = 0; i < 20; i++) {
    	
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Numeros inversos: ");
    
    for (i = 19; i >= 0; i--) {
        printf("%d ", numeros[i]);
        
    }
    
    printf("\n");

    return 0;
}
