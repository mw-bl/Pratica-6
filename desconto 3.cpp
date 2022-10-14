#include <stdio.h>
#include <locale.h>

int main (){
	int pessoa01, pessoa02;
	setlocale(LC_ALL, "Portuguese_Brazil");
		
	printf("Digite a idade da primeira pessoa:");
	scanf("%d", &pessoa01);
	
	printf("\nDigite a idade da segunda pessoa:");
	scanf("%d", &pessoa02);
	
	if(pessoa01%2 == 0){
		printf("\nDESCONTO");
	}
	return 0;
}
