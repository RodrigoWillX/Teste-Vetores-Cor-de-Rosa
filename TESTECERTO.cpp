#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main (){
	system ("color DA");
	int vet [8];
	int i = 0;
	
while(i < 8){
	printf("\n Declare o valor do vetor: ");
	scanf("%d", &vet[i]);
	i++;
}

	printf("\n Os valores digitados sao: ");
	for (int j=0; j < 8;j++){
		printf("\n Posicao: %d ", j);
		printf("Valor: %d", vet[j]);
	}
	return 0;
	system ("pause");
	
		
}
