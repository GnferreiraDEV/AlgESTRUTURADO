#include <stdio.h>

int main() {
	
    int a, b;
    
    if (&a > &b) {
    	
        printf("Endereco de a (%p) eh maior.\n", (void*)&a);
        
    } else {
    	
        printf("Endereco de b (%p) eh maior.\n", (void*)&b);
    }
    return 0;
}
