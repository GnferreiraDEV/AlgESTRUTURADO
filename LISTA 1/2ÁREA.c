#include <stdio.h>

int main() {
    
	float B, H, A;
    
    printf("Qual � a base do ret�ngulo?: ");
    scanf("%f", &B);

    printf("Qual � a altura do ret�ngulo: ");
    scanf("%f", &H);

    A = B * H;

    printf("A �rea do ret�ngulo �: %.3f\n", A);

    return 0;
}

