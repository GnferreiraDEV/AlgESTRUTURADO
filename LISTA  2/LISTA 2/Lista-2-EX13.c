#include <stdio.h>

int main() {
	
    int quantidade_atual, quantidade_max, quantidade_minima;
    float q_media;
    
    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &quantidade_atual);
    
    printf("Digite a quantidade maxima em estoque: ");
    scanf("%d", &quantidade_max);
    
    printf("Digite a quantidade minima em estoque: ");
    scanf("%d", &quantidade_minima);
    
    q_media = (quantidade_max + quantidade_minima) / 2.0;
    
    printf("Quantidade media: %.2f\n", q_media);
    
    if (quantidade_atual >= q_media) {
    	
        printf("NAO efetuar compra\n");
        
    } else {
    	
        printf("Efetuar compra\n");
        
    }
    
    return 0;
}

