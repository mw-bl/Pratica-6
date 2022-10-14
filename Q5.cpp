#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	int idade, d, m;
	
	printf("Insira sua idade: ");
	scanf("%d", &idade);
	

	if (idade%2 == 0 ){	
		printf("Sua idade é par. \n");
		
		d = idade * 2;
		printf("O dobro da idade digitada é: %d ", d);
		
		m= idade / 2;	
		printf("A metade da idade digitada é: %d", m);
	}

	if(idade == 1){	
		printf("Sua idade é ímpar. \n");
	}
	return 0;
	
}
