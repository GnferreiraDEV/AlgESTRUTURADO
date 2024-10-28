 #include <stdio.h>

int main() {
	
    int N;
    int i;
    
    printf("Digite o tamanho: ");
    scanf("%d", &N);

    int A[N], B[N], Soma[N];

    for (i = 0; i < N; i++) {
    	
        printf("Digite o numero A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for ( i = 0; i < N; i++) {
    	
        printf("Digite o numero B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < N; i++) {
    	
        Soma[i] = A[i] + B[i];
    }

    printf("Soma: ");
    
    for (i = 0; i < N; i++) {
        printf("%d ", Soma[i]);
        
    }
    
    printf("\n");

    return 0;
}

