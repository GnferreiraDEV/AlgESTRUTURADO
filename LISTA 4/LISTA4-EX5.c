#include <stdio.h>


int SomaDivisores(int num) {
	
    int soma = 0;
    int i;
    
    for ( i = 1; i <= num / 2; i++) {
    	
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}


int ler_numero_positivo() {
	
    int num;
    
    do {
        printf("Digite um numero inteiro positivo:\n");
        scanf("%d", &num);
        
    } while (num <= 0);
    return num;
}

int main() {
	
    int numeros[5];
    int i;
    
    printf("Digite 5 numeros:\n");
    
    for (i = 0; i < 5; i++) {
        numeros[i] = ler_numero_positivo();
    }
    
    for (i = 0; i < 5; i++) {
        printf("Soma  de %d (exceto ele mesmo): %d\n", numeros[i], SomaDivisores(numeros[i]));
    }
    
    return 0;
}

