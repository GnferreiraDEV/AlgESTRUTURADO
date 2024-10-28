#include <stdio.h>

int main () {
	
	float primeira_nota, segunda_nota, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &primeira_nota);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &segunda_nota);
	
	media = (primeira_nota + segunda_nota) / 2;
	
	if (media >= 7) {
		
		printf("APROVADO!!\n");
		
	} else {
		
		printf("REPROVADO!!\n");
		
	}
	
	printf("O resultado da média é: %.2f\n", media);
	
	return 0;
}
