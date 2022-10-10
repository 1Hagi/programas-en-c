#include<stdio.h>

float vectorA[4], vectorB[4];

void cargarVector();
void sumaDeVectores(float, float);

int main(){
	printf("Suma de Vectores\n\n");
	cargarVector();
	sumaDeVectores(vectorA[4], vectorB[4]);
	return 0;
}

void cargarVector() {
	int i;
	
	for(i=0;i<=4;i++) {
		printf("Ingrese valor para vectorA, posicion %d: ", i+1);
		scanf("%f", &vectorA[i]);
	}
	for(i=0;i<5;i++) {
		printf("Ingrese valor para vectorB, posicion %d: ", i+1);
		scanf("%f", &vectorB[i]);
	}
}

void sumaDeVectores(float A, float B) {
	int i;
	printf("\nVector A + B Resultados:\n\t");
	for(i=0;i<5;i++) {
		printf("%.2f + %.2f = %.2f\n\t", vectorA[i], vectorB[i], vectorA[i] + vectorB[i]);
	}
}
