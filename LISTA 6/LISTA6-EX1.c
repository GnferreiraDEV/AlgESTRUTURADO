#include <stdio.h>
#include <string.h>

int validaSenha (char senha[]) {
	
	int i, verifica = 0;
	if (strlen(senha) < 8) return 0;
	if (strlen(senha) > 100) return 0;
	
	for (i = 0; i <= strlen(senha); i++) {
		
			if (senha[i] >= 48 && senha[i] <= 57) {
				if (verifica % 2 == 0)
				verifica++;
				else continue;
			
			} else if (senha[i] >= 65 && senha[i] <= 90) {
				if (verifica == 1 || verifica == 4 || verifica == 5)
				verifica += 2;
				else continue;
				
			} else if (senha[i] >= 97 && senha[i] <= 122) {
					if (verifica >= 4)
					continue;	
					else verifica += 4;
			}
	}
	
		if (verifica == 7)
		return 1;
		else return 0;
}

	int main () {
	
	char senha[101];
	Inicio:
	
	printf ("Digite a senha: ");
	scanf ("%s", senha);
	
	if (validaSenha(senha) == 0) {
	
	printf ("\n A senha deve conter no minimo 8 e no maximo 100 caracteres\n");
	
	printf (" Um numero\n");
	
	printf ("Pelos menos uma letra minuscula\n");
	
	printf ("Uma letra maiscula\n\n"); 
		
	goto Inicio;
	
	} else {
	
	printf ("Senha Digitada: %s", senha);
	}
	
	return 0;
}
