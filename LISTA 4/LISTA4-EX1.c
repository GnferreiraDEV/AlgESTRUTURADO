#include <stdio.h>


int menorn(int a, int b) {
	
    return (a < b) ? a : b;
}

int main() {
	
    int n1, n2;
    
    printf("Digite dois numeros :\n");
    scanf("%d %d", &num1, &num2);
    
    printf("O menor numero eh: %d\n", menorn(n1, n2));
    
    return 0;
}

