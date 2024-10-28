#include <stdio.h>

int main (){
	
	float custo_final, custo_fabrica, percentual_distribuidor = 1.28 , impostos = 1.45;
	
	printf ("Qual o custo de fabrica do carro? ");
	scanf ("%f", &custo_fabrica);
	
	custo_final = (custo_fabrica * percentual_distribuidor) * impostos;
	
	printf ("Custo final do carro: %.2f", custo_final);
		
	return 0;
}
