#include <stdio.h>

int main() {
	int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 70, 60, 25, 10, 50, 40, 90, 10, 2};
	int tamanho = sizeof(array) / sizeof(array[0]);
	
	int maior = 0;
	int menor = 0;
	
	for(int i = 0; i<tamanho; i++) {
		if(array[i] > maior) {
			maior = array[i];
		}
		else {
			menor = array[i];
		}
	}
	
	printf("Maior Registro: %d\n", maior);
	printf("Menor Registro: %d\n", menor);
	
	return 0;
}
