#include <stdio.h>


int main() {
	
	int i;
    int vetor[30], numero, contador = 0;

    printf("Digite os numeros do vetor:\n");
    
    for (i = 0; i < 30; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero para contar: ");
    
    scanf("%d", &numero);


    for (i = 0; i < 30; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }

    printf("O numero aparece %d vezes no vetor.\n", contador);
    
    return 0;
}
