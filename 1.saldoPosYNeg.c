#include<stdio.h>

int numCuenta, cantPos, cantNeg;
float saldo;
char nombre[10];
char respuesta;

int main() {
	cantPos = 0;
	cantNeg = 0;
		printf("\tDesea ingresar nuevo cliente? (S=si , N=no):\n\t");
		scanf("%c", &respuesta);
	while(respuesta == 'S' || respuesta == 's') {
		printf("Ingrese numero de cuenta: ");
		scanf("%d", &numCuenta);
		printf("Ingrese nombre del cliente: ");
		scanf("%s", &nombre);
		fflush(stdin);
		printf("Ingrese salgo correspondiente: ");
		scanf("%f", &saldo);
		fflush(stdin);
		printf("\tDesea ingresar nuevo cliente? (S si, N no):\n\t");
		scanf("%c", &respuesta);
		fflush(stdin);
		if(saldo>0) {
			cantPos++;
		}
		else {
			cantNeg++;
		}
	}
	printf("\nCantidad de cuentas con salgo Positivo: %d", cantPos);
	printf("\nCantidad de cuentas con salgo Negativo: %d", cantNeg);
	return 0;
}
