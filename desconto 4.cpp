#include <stdio.h>
#include <locale.h>

int main (){
	int a, b;
	setlocale(LC_ALL, "Portuguese_Brazil");
		
	printf("Digite a idade da primeira pessoa:");
	scanf("%d", &a);
	
	printf("\nDigite a idade da segunda pessoa:");
	scanf("%d", &b);
	
	if((a%2==1) || (b%2==1)){
		printf("\nDESCONTO");
	}
	return 0;
}
