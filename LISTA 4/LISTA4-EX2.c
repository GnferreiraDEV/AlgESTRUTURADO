#include <stdio.h>
#include <math.h>


float dist(float x1, float y1, float x2, float y2) {
	
    return sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
	
    float x1, y1, x2, y2;
    
    printf("Quais sao as coordenadas do primeiro ponto (x1 y1):\n");
    scanf("%f %f", &x1, &y1);
    
    printf("Quais sao as coordenadas do segundo ponto (x2 y2):\n");
    scanf("%f %f", &x2, &y2);
    
    printf("A distancia euclidiana eh: %.2f\n", dist(x1, y1, x2, y2));
    
    return 0;
}

