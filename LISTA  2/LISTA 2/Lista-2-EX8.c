#include <stdio.h>

int main () {


	int hinicio, hfim, duracao;
	
	printf("Digite o horario de inicio da partida: ");
	scanf("%d", &hinicio);
	
	printf("Digite o horario final da partida: ");
	scanf("%d", &hfim);
	
	
	
	if (duracao < 25) {
		
		duracao = hfim - hinicio;
		 
		printf("A duracao da partida foi de: %.d horas!\n", duracao);
		
	} else {
		
		printf("A duracao da partida é superior ao tempo limite!");
	}
	
	return 0;

}
