#include <stdio.h>

void trocar(int *a, int *b) {
	
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
	
    int A, B;
    
    printf("Digite A: ");
    scanf("%d", &A);
    
    printf("Digite B: ");
    scanf("%d", &B);

    trocar(&A, &B);

    printf("TROCA : A = %d, B = %d\n", A, B);
    
    return 0;
}
