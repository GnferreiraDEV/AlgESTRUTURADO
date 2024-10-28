#include <stdio.h>


int snal(int num) {
	
    if (num > 0) return 1;
    
    if (num < 0) return -1;
    
    return 0;
}

int main() {
	
    int num;
    
    printf("Digite um numero:\n");
    scanf("%d", &num);
    
    int rest = snal(num);
    
    if (rest == 1) {
    	
        printf("%d eh (1) positivo.\n", num);
        
    } else if (rest == -1) {
        printf("%d eh (-1) negativo.\n", num);
        
    } else {
        printf("%d eh (0) zero.\n", num);
    }
    
    return 0;
}

