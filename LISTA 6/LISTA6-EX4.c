#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    unsigned char texto[100];

    int i, j, aux = 0, tamanho, palindromo = 1, acento;

    printf("Me diga um texto: ");

    inicio:

    scanf(" %99[^\n]", texto);

    tamanho =  strlen(texto);

    acento = 0;

    for (i = 0; i < tamanho; i++){
    	
        if(texto[i] >= 128){
        	
            acento = 1;
            texto[0] =  '\0';
            printf("Apalavra digitada tem acento, digite-a novamente sem o acento:\n");
            
			goto inicio;
			break; 
        }

        texto[i] = toupper(texto[i]);

        if(texto[i] < 65 || texto[i] > 90){
            texto[i] = 0;
            continue;
        }

        texto[aux] = texto[i];

        if (aux < i){
            texto[i] = 0;
        }

        aux++;
    }

    tamanho = strlen(texto);

    for(i = 0, j = tamanho-1; i < ((tamanho)/2); i++, j--){
    	
        if(texto[i] != texto[j]) {
        	
            palindromo = 0;
            break;
        }

    }

    if(palindromo) printf("\nA palavra digitada eh um palindromo");
    else printf("\nA palavra digitada nao eh um palindromo");

    return 0;
}
