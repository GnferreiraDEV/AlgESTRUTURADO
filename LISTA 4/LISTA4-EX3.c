#include <stdio.h>


int potencia(int base, int expoente) {
	
    int rest = 1;
    int i;
    
    for (i = 0; i < expoente; i++) {
        rest *= base;
    }
    return rest;
}

int main() {
	
    int base, expoente;
    
    printf("Digite a base e o expoente respectivamente:\n");
    scanf("%d %d", &base, &expoente);
    
    printf("%d^%d = %d\n", base, expoente, potencia(base, expoente));
    
    return 0;
}

