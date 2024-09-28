#include <stdio.h>
#include <string.h>
#include "decodificador.c"

void main(){
	int TESTES;
	char M_CIFRADA[100];
	printf("Quantos testes: ");
	scanf("%d", &TESTES);
	fflush(stdin);
	
	int I, CHAVE;
	for (I = 0; I < TESTES; I++){
 		printf("\nQual com a chave b: ");
 		scanf("%d", &CHAVE);
 		
 		fflush(stdin);
 		
		printf("Entre com a mensagem cifrada: ");
		fgets(M_CIFRADA, 100, stdin);
		fflush(stdin);
		
		separa_e_converte(M_CIFRADA, CHAVE);
		
	}
}
