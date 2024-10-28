#include <stdio.h>

int main () {
	
	float h_trabalhadas, salario_hora, salario_total, hora_extra, horario_extra, horario_completo;
	
	printf("Digite o numero de horas trabalhadas durante o mes: ");
	scanf("%f", &h_trabalhadas);
	
	printf("Digite o valor do salario por hora: ");
	scanf("%f", &salario_hora);
	
	horario_completo = 40.0;
	horario_extra = 1.50;
	
	if (h_trabalhadas > (horario_completo * 4)) {
        hora_extra = h_trabalhadas - (horario_completo * 4);
        salario_total = (horario_completo * 4 * salario_hora) + (hora_extra * salario_hora * horario_extra);
    } else {
        salario_total = h_trabalhadas * salario_hora;
    }
    
    printf("O salario total  eh: R$ %.2f\n", salario_total);
    
    return 0;
	
}
