#include <stdio.h>

int main() {
	
	int i;
    float array[10];
    
    for ( i = 0; i < 10; i++) {
    	
        printf("Endere�o [%d]: %p\n", i, (void*)&array[i]);
        
    }
    return 0;
}
 
