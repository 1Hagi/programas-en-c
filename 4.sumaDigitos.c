#include<stdio.h>

int numEntero, AUX, suma;

int sumaDeDigitos(int);

int main() {
	suma = 0;
	printf("Suma de digitos de numeros enteros\n\n");
	printf("Ingrese un numero entero: ");
	scanf("%d", &numEntero);
	suma = sumaDeDigitos(numEntero);
	printf("Suma de los digitos ingresados es: %d", suma);
	return 0;
}

int sumaDeDigitos(N) {
	while(N!=0) {
		AUX=N%10;
		N=N/10;
		suma=suma+AUX;
	}
	return suma;
}
