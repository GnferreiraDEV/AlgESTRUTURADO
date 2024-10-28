#include <stdio.h>

int main() {
	
	int i;
    int vetor[20], numero, novo_vetor[20], contador = 0;

  
    for (i = 0; i < 20; i++) {
    	
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite para verificar: ");
    scanf("%d", &numero);

 
    for (i = 0; i < 20; i++) {
        if (vetor[i] != numero) {
            novo_vetor[contador++] = vetor[i];
        }
    }

    if (contador == 20) {
        printf("O número n exister.\n");
        
    } else {
    	
        printf("Novo vetor sem o numero: ");
        for (i = 0; i < contador; i++) {
            printf("%d ", novo_vetor[i]);
        }
        
        printf("\n");
    }

    return 0;
}
