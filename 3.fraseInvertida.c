#include<stdio.h>

char frase[10];
char fraseInv[10];

void fraseInvertida();

int main() {
	printf("Ingrese una frase (de 10 letras y sin espacios):\n\t");
	scanf("%s", frase);
	fflush(stdin);
	fraseInvertida();
	return 0;
}

void fraseInvertida() {
	printf("Longitud: %i", sizeof(frase));
	int i, j;
	j = 0;
	for(i=9; i>-1; i--) {
		fraseInv[j] = frase[i];
		j++;
	}
	printf("Frase ingresada en forma invertida:\n\t%s", fraseInv);
}
