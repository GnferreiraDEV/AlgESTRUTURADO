#include <stdio.h>

int main() {
	
	int i, j;
    int matriz[3][3];
    int determinante;

    printf("Digite os numeeros da matriz 3x3:\n");
    
    for (i = 0; i < 3; i++) {
    	
    	
        for (j = 0; j < 3; j++) {
        	
            scanf("%d", &matriz[i][j]);
        }
    
    }


    determinante = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
    
                   matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
                   
                   matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
                   

    printf("O determinante da matriz eh: %d\n", determinante);
    
    return 0;
}
