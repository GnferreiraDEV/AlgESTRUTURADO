#include <stdio.h>

int main() {
	
    float temp[365];
    float menor, maior, media = 0;
    int count = 0;
    int i;

    for (i = 0; i < 365; i++) {
    	
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        
        media += temp[i];
    }

    media /= 365;
    menor = temp[0];
    maior = temp[0];

    for (i = 1; i < 365; i++) {
    	
        if (temp[i] < menor) menor = temp[i];
        
        if (temp[i] > maior) maior = temp[i];
        
        if (temp[i] < media) count++;
    }

    printf("Menor temperatura: %.2f\n", menor);
    
    printf("Maior temperatura: %.2f\n", maior);
    
    printf("Temperatura média anual: %.2f\n", media);
    
    printf("Dias com temperatura inferior à média: %d\n", count);

    return 0;
}
