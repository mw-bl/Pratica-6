#include <stdio.h>
#include <locale.h>

int main (){
	int idadeP1, idadeP2;
	setlocale(LC_ALL, "Portuguese_Brazil");
		
	printf("Digite a idade da primeira pessoa:");
	scanf("%d", &idadeP1);
	
	printf("\nDigite a idade da segunda pessoa:");
	scanf("%d", &idadeP2);
	
	if( (idadeP1%2 == 0) or (idadeP2%2 == 0) ){
		printf("\nDESCONTO");
	}
	return 0;
}
