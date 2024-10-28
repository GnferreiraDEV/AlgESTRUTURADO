#include <stdio.h>

int main () {
	
	int valor1, valor2;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);
	
	if (valor1 == valor2) {
		
		printf("Os valores nao podem ser iguais!!");
		
		return 1;
		
	} else if (valor1 > valor2) {
		
		printf("A ordem crescente eh: %d, %.d\n", valor2, valor1);
		
	}else {
		
		printf("A ordem crescente eh: %d %.d\n", valor1, valor2);
		
	}
	
	return 0;
}
