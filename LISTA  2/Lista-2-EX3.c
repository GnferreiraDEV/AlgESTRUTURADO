#include <stdio.h>

int main () {
	
	int macas_compradas;
	float custo_total, preco;
	
	printf("Digite o valor de maçãs que foram compradas: ");
	scanf("%d", &macas_compradas);
	
	if (macas_compradas >= 12) {
		
		preco = 1.00;
		
	} else {
		
		preco = 1.30;
	}
	
	custo_total = macas_compradas * preco;
	
	printf("O custo total da compra eh de: R$%.2f\n", custo_total);
	
	return 0;
}
