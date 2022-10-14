#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int idade, estudante;
	
	printf("Digite sua idade:");
	scanf("%d", &idade);
	
	printf("\nVocê é estudante?\n1 - SIM\t\t 0 - NÃO:");
	scanf("%d", &estudante);
	
	if ( (idade>=65) or (estudante)){
		printf("Meia Entrada");
	}
	return 0;
}
