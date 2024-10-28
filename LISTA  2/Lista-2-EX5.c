#include <stdio.h>

int main () {
	
	int ano_atual, ano_de_nascimento, idade;
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &ano_de_nascimento);
	
	idade = ano_atual - ano_de_nascimento;
	
	
	if (idade >= 16) {
		
		printf("Você poderá votar esse ano!!\n");
		
	} else {
		
		printf("Você não poderá votar esse ano!!\n");
		
	}
	
	
	return 0;
	
	
}
