#include <stdio.h>

int main() {
	
	int n, aux;
	
	printf("--> Acceso a programa de Numeros Pedrisco <--\n");
	printf("\nIngrese un numero natural: ");
	scanf("%i", &n);
	aux = n;
	while(n!=1) {
		if(aux % 2 == 0) {
			n = n / 2;
			printf("\nNumero resultante es Par, %i / 2 = %i", aux, n);
			aux = n;

		}
		else {
			n = n * 3 + 1;
			printf("\nNumero resultante es Impar, %i * 3 + 1 = %i",aux, n);
			aux = n;
		}
	}
	printf("\n\nEl numero ingresado llego a la unidad (1)..");
	return 0;
}
