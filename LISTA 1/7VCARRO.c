#include <stdio.h>

int main() {
	
    int carros_vendidos;
    float totalvendas, salario, comissao, comissaop, salariof;


    printf("Carros vendidos: ");
    scanf("%d", &carros_vendidos);

    printf("Total das vendas: ");
    scanf("%f", &totalvendas);

    printf(" Valor do sal�rio fixo do vendedor: ");
    scanf("%f", &salario);

    printf("Valor da comiss�o: ");
    scanf("%f", &comissao);

    float comissaoF = carros_vendidos * comissao;
    
    comissaop = 0.05 * totalvendas;

    salariof = salario + comissaoF + comissaop;

    printf("O sal�rio final do vendedor �: %.2f\n", salariof);

    return 0;
}

