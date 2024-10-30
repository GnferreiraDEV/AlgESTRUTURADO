#include <stdio.h>

int verifica(char *str1, char *str2) {
	
    while (*str1) {
    	
        char *p1 = str1;
        char *p2 = str2;
        
        while (*p1 && *p2 && (*p1 == *p2)) {
        	
            p1++;
            p2++;
        }
        
        if (!*p2) return 1;
        
        str1++;
    }
    
    return 0;
}

int main() {
	
    char str1[100], str2[100];
    
    printf("Digite a string: ");
    gets(str1);
    
    printf("Digite a string: ");
    gets(str2);

    if (verifica(str1, str2)) {
    	
        printf("Ocorre dentro da primeira.\n");
        
    } else {
    	
        printf("NAO ocorre dentro da primeira.\n");
    }

    return 0;
}
