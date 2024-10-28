#include <stdio.h>

int main() {
	
    int i, media;
    
   int num = 0;
   int cont = 0;
	
    for (i = 15; i <= 100; i++) {
        num += i;
        cont++;
    }

     media = (float)num / cont;
    printf("Media aritmetica dos numeros entre 15 e 100: %.2f\n", media);

    return 0;
}

