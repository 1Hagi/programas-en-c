#include<stdio.h>
#define max 11

void menu();
void cargarPila();
void listarPila();
void eliminarDisco();
void discoEnTope();
void cacularCantidad();
void calcularPromedio();

int pila[max];
int tope = -1;

int main() {
	printf("** Pesas de Gimnacio **\n\n");
	menu();
	return 0;
}

void menu() {
	int respuesta;
	
	printf("Menu:\n");
	printf("1.Cargar disco en la pila.\n");
	printf("2.Consultar kg de cada posicion.\n");
	printf("3.Eliminar ultimo disco de la pila.\n");
	printf("4.Consultar disco en el topo de la pila.\n");
	printf("5.Consultar cantidad de discos en la pila.\n");
	printf("6.Calcular el promedio.\n");
	printf("7.Salir del programa.\n");
	scanf("%i", &respuesta);
	
	switch(respuesta) {
		case 1: cargarPila();
				menu();
				break;
		case 2: listarPila();
				menu();
				break;
		case 3: eliminarDisco();
				menu();
				break;
		case 4: discoEnTope();
				menu();
				break;
		case 5: cacularCantidad();;
				menu();
				break;
		case 6: calcularPromedio();
				menu();
				break;
				case 7:
				break;
		default: printf("ERROR: numero ingresado invalido.");
	}
}

void cargarPila() {
	if(tope<max) {
		tope=tope+1;
		printf("\nIngrese Kg de la pesa numero %i: ", tope+1);
		scanf("%i", &pila[tope]);
	}
	else {
		printf("\nLa pila esta llena..\n\n");
	}
}

void listarPila() {
	int i;
	for(i=0; i<=tope; i++) {
		printf("\n\tPesa en posicion %i: %i\n", i+1, pila[i]);
	}
}

void eliminarDisco() {
	if(tope>=0) {
		pila[tope] = 0;
		tope = tope - 1;
		printf("\nUltimo elemento eliminado..\n");
	}
	else {
		printf("\nLa pila esta vacia..\n\n");
	}
}

void discoEnTope() {
	printf("\nElemento en tope es de: %i Kg.\n", pila[tope]);
}

void cacularCantidad() {
	printf("\nCantidad de elementos: %i\n", tope+1);
}

void calcularPromedio() {
	int i;
	float AUX=0;

	for(i=0;i<=tope;i++) {
		AUX = AUX + pila[i];
	}
	AUX = AUX / (tope+1);
	printf("\nEl promedio de Kg. es de: %.2f Kg.\n", AUX);
}
