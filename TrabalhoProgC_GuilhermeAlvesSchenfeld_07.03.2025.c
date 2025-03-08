#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

int main () {
	int i, j;
	/*int matriz[TAM][TAM] = {
		{0, 0, 0},
		{1, 1, 0},
		{0, 1, 0}
	};*/
	srand(time(NULL));
	
	int matriz[TAM][TAM], matrizDesc[TAM][TAM];
	
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			matriz[i][j] = rand() % 2;
		}
	}
	int cont = 0;
	
	printf("MATRIZ: \n");
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	int ultCar = matriz[0][0];
	
	printf("RLE: \n");
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			matrizDesc[i][j] = matriz[i][j];
			if (matriz[i][j] == ultCar) {
				cont++;
				//ultCar == matriz[i][j];
			} else {
				printf("(%d, %d)\n", cont, ultCar);
				ultCar = matriz[i][j];
				cont = 1;
			}
		}
	}
	printf("(%d, %d)\n\n\n", cont, ultCar);
	
	printf("Matriz descompactada: \n");
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			printf("%d", matrizDesc[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
