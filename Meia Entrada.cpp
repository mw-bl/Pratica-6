#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int idade, estudante;
	
	printf("Digite sua idade:");
	scanf("%d", &idade);
	
	printf("\nVoc� � estudante?\n1 - SIM\t\t 0 - N�O:");
	scanf("%d", &estudante);
	
	if ( (idade>=65) or (estudante)){
		printf("Meia Entrada");
	}
	return 0;
}
