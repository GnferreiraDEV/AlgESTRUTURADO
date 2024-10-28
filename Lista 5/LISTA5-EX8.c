#include <stdio.h>

int main() {
	
    int numeros[10];
    int i, j;


    for (i = 0; i < 10; i++) {
    	
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
    }

  
    for (i = 0; i < 10 - 1; i++) {
    	
        for (j = 0; j < 10 - i - 1; j++) {
        	
            if (numeros[j] > numeros[j + 1]) {
            	
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("Numeros ordenados: ");
    
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
