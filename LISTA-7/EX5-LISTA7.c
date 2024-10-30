#include <stdio.h>

int main() {
	
	int i;
	int j;
    float matriz[3][3];
    
    for ( i = 0; i < 3; i++) {
    	
        for ( j = 0; j < 3; j++) {
        	
            printf("Endereço [%d][%d]: %p\n", i, j, (void*)&matriz[i][j]);
        }
    }
    return 0;
}


