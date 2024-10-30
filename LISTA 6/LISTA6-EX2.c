#include <stdio.h>
#include <string.h>

int main () {
	
	char string[20] = "OLA REDE!!";
	int i, contador = 0;
	int tamanho;
	
	tamanho = strlen(string);
	
	printf ("Tamanho usando strlen: %d\n", tamanho);
	
	for (i = 0; ; i++) {
		
		if (string[i] == '\0') {
		
			contador++;
			break;
		}
		
		contador++;
	}
	
	printf ("Tamanho sem usar strlen: %d\n", contador);
	
	printf ("Comparando os resultados: %d", (tamanho - contador));
	
	return 0;
}
