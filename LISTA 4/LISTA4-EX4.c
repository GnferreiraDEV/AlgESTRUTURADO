#include <stdio.h>
#include <stdlib.h>  


int Absoluto(int numero) {
	
    return (numero < 0) ? -numero : numero;
}

int main() {
	
    int valores[5];
    int i;
    
    printf("Digite 5 valores inteiros:\n");
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }
    
    printf("Valores absolutos:\n");
    
    for ( i = 0; i < 5; i++) {
        printf("%d\n", Absoluto(valores[i]));
    }
    
    return 0;
}

