#include <stdio.h>

int main () {
	
	float nota1, nota2, nota3, media;
	
	printf ("Qual a nota n1 do aluno? ");
	scanf ("%f", &nota1);
	
	printf ("Qual a nota n2 do aluno? ");
	scanf ("%f", &nota2);
	
	printf ("Qual a nota n3 do aluno? ");
	scanf ("%f", &nota3);
	
	media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
	
	printf ("A media do aluno eh: %.2f", media);
	
	return 0;	
}
