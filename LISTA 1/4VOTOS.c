#include <stdio.h>

int main() {
    int teleitores, brancos, nulos, validos;
    float pbrancos, pnulos, pvalidos;
   
    printf("Digite o n�mero total de eleitores: ");
    scanf("%d", &teleitores);

    printf("Digite o n�mero de votos brancos: ");
    scanf("%d", &brancos);

    printf("Digite o n�mero de votos nulos: ");
    scanf("%d", &nulos);

    printf("Digite o n�mero de votos v�lidos: ");
    scanf("%d", &validos);
    
    pbrancos = (float)brancos / teleitores * 100;
    pnulos = (float)nulos / teleitores * 100;
    pvalidos = (float)validos / teleitores * 100;


    printf("Percentual de votos brancos: %.2f%%\n", pbrancos);
    printf("Percentual de votos nulos: %.2f%%\n", pnulos);
    printf("Percentual de votos v�lidos: %.2f%%\n", pvalidos);

    return 0;
}

