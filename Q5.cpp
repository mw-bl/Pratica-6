#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	int idade, d, m;
	
	printf("Insira sua idade: ");
	scanf("%d", &idade);
	

	if (idade%2 == 0 ){	
		printf("Sua idade � par. \n");
		
		d = idade * 2;
		printf("O dobro da idade digitada �: %d ", d);
		
		m= idade / 2;	
		printf("A metade da idade digitada �: %d", m);
	}

	if(idade == 1){	
		printf("Sua idade � �mpar. \n");
	}
	return 0;
	
}
