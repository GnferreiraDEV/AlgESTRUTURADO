#include <stdio.h>


int vpar(int num) {
	
    return (num % 2 == 0) ? 1 : 0;
}

int main() {
	
    int num;
    
    printf("Digite um numero :\n");
    scanf("%d", &num);
    
    if (vpar(num)) {
    	
        printf("%d 0.\n", num);
        
    } else {
    	
        printf("%d 1.\n", num);
    }
    
    return 0;
}

