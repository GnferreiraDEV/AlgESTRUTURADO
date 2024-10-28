#include <stdio.h>

int main() {
	
    int N,i;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &N);
    
    while (N <= 0) {
    	
        printf("Digite um valor maior que zero: ");
        scanf("%d", &N);
    }

    for (i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}

