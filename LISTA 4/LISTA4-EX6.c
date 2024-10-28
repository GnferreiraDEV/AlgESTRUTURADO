#include <stdio.h>


float aritmetica(float n1, float n2, float n3) {
	
    return (n1 + n2 + n3) / 3;
}


float ponderada(float n1, float n2, float n3) {
	
    return (n1 * 5 + n2 * 3 + n3 * 2) / 10;
}


float harmonica(float n1, float n2, float n3) {
	
    return 3 / (1/n1 + 1/n2 + 1/n3);
}


float calcular_m(float n1, float n2, float n3, char tipo) {
	
    switch (aph)
    
        case 'A': return aritmetica(n1, n2, n3);
        
        case 'P': return ponderada(n1, n2, n3);
        
        case 'H': return harmonica(n1, n2, n3);
        
        default: return 0;
    }
}

int main() {
	
    float n1, n2, n3;
    char aph;
    
    printf("Digite tres notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("Digite qyal media (A, P, H):\n");
    scanf(" %c", &aph);
    
    printf("A media eh: %.2f\n", calcular_m(n1, n2, n3, aph));
    
    return 0;
}

