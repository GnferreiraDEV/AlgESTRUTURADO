#include <stdio.h>

int main() {
	
    float salario, valor_vendas, comissao, salariot;

    printf("Digite o sal�rio fixo: R$ ");
    scanf("%f", &salario);
    
    printf("Digite o valor das vendas totais: R$ ");
    scanf("%f", &valor_vendas);
    
    if (valor_vendas <= 1500) {
        comissao = valor_vendas * 0.03;
    } else {
        comissao = 1500 * 0.03 + (valor_vendas - 1500) * 0.05;
    }
    
    salariot = salario + comissao;
    
    printf("O sal�rio total do vendedor �: R$ %.2f\n", salariot);
    
    return 0;
}

