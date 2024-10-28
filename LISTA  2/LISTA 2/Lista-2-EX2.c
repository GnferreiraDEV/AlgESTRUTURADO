#include <stdio.h>

int main () {
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num >= 0) {
		
		printf("O numero digitado eh positivo!!");
		
	} else {
		
		printf("O numero digitado eh negativo!!");
	}
	
	return 0;
}
