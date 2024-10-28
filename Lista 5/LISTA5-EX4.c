#include <stdio.h>

int main() {
	
    int A[10], M[10], X;
    int i;

    for (i = 0; i < 10; i++) 
    
        printf("Digite o numero A[%d]: ", i);
        scanf("%d", &A[i]);
        
    }

    printf("Digite um numero X: ");
    scanf("%d", &X);

    for (i = 0; i < 10; i++) {
        M[i] = A[i] * X;
    }

    printf("Vetor M: ");
    
    for (i = 0; i < 10; i++) {
        printf("%d ", M[i]);
    }
    
    printf("\n");

    return 0;
}
