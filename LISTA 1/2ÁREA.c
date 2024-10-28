#include <stdio.h>

int main() {
    
	float B, H, A;
    
    printf("Qual é a base do retângulo?: ");
    scanf("%f", &B);

    printf("Qual é a altura do retângulo: ");
    scanf("%f", &H);

    A = B * H;

    printf("A área do retângulo é: %.3f\n", A);

    return 0;
}

