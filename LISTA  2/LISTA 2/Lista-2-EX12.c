#include <stdio.h>

int main() {
	
    int numero_da_conta;
    float saldo, debito, credito, saldo_atual;
    
    printf("Digite o n�mero da conta: ");
    scanf("%d", &numero_da_conta);
    
    printf("Digite o saldo: R$ ");
    scanf("%f", &saldo);
    
    printf("Digite o d�bito: R$ ");
    scanf("%f", &debito);
    
    printf("Digite o cr�dito: R$ ");
    scanf("%f", &credito);
    
    saldo_atual = saldo - debito + credito;
    
    printf("Saldo atual: R$ %.2f\n", saldo_atual);
    
    if (saldo_atual >= 0) {
    	
        printf("Saldo Positivo\n");
        
    } else {
    	
        printf("Saldo Negativo\n");
        
    }
    
    return 0;
}

