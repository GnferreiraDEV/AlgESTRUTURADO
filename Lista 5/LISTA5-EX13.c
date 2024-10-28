#include <stdio.h>

int main() {
	
    int VET[50], contador_repetidos = 0;
    int repetidos[50] = {0};
    int i, j;

    printf("Digite os numeros:\n");
    
    for (i = 0; i < 50; i++) {
        scanf("%d", &VET[i]);
    }

    for ( i = 0; i < 50; i++) {
    	
        for (j = i + 1; j < 50; j++) {
        	
            if (VET[i] == VET[j]) {
            	
                if (!repetidos[i]) {
                	
                    printf("Numero %d repetido : %d e %d\n", VET[i], i, j);
                    repetidos[i] = 1; 
                }
            }
        }
    }

    return 0;
}
