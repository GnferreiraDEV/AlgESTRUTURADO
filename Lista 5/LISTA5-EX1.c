#include <stdio.h>

int main() {
	
    float notas[20], media = 0;
    int count = 0;
	int i;
	
    for (i = 0; i < 20; i++) {
    	
        printf("Digite a nota  %d: ", i + 1);
        scanf("%f", &notas[i]);
        
        media += notas[i];
        
    }

    media /= 20;

    for (i = 0; i < 20; i++) {
    	
        if (notas[i] > media) {
            count++;
        }
    }

    printf("Media da turma: %.2f\n", media);
    printf("Acima da media: %d\n", count);

    return 0;
}
