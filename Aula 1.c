#include <stdio.h>


int main() {
	int contador = 0;
	char continua; 
	
	do {
	// Comandos a serem repetidos.
	
	    printf("Repentindo....\n");
	    
	    contador = contador + 1;
	    
	    
	    printf("Tecle 's' se deseja continuar\n");
	    scanf("%c",&continua);
	    
	    fflush(stdin);
	    
    } while (continua == 's');
    
    printf("O bloco foi repetido %d vezes", contador);
    
    
    return 0;
	
	
	}

