#include <stdio.h>

int main() {
	
    int a, m, d;
    int dtotal;

    printf("Quantos anos vc tem?: ");
    scanf("%d", &a);

    printf("Informe sua idade em meses: ");
    scanf("%d", &m);

    printf("Informe sua idade em dias: ");
    scanf("%d", &d);
 
    dtotal = (a * 365) + (m * 30) + d;

    printf("A idade total é: %d\n", dtotal);

    return 0;
}

