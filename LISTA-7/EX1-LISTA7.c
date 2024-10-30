#include <stdio.h>

int main() {
	
    int i = 10;
    float f = 5.5;
    char c = 'A';

    int *pi = &i;
    float *pf = &f;
    char *pc = &c;


    printf("Antes: i = %d, f = %.2f, c = %c\n", i, f, c);

   
    *pi = 20;
    *pf = 7.7;
    *pc = 'B';


    printf("Apos: i = %d, f = %.2f, c = %c\n", i, f, c);

    return 0;
}
