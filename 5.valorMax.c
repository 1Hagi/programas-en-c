#include<stdio.h>

int num1, num2, resultado;

int max(int, int);

int main() {
	printf("Maximo entre a y b:\n\n");
	printf("Ingrese el primero numero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	resultado = max(num1, num2);
	printf("El valor maximo es: %d", resultado);
}

int max(A, B) {
	if(A>=B) {
		return A;
	}
	else {
		return B;
	}
}
