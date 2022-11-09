#include<stdio.h>
#define max 19

void menu();
void inicializarCola();
void ingresarDato();
void eliminarDato();
void listado();
void disponibilidad();

int cola[max];
int frente = -1, final = -1;

int main() {
	inicializarCola();
	printf("< Registro en cochera de estacionamiento en Shopping >");
	menu();
	return 0;
}

void inicializarCola() {
	int i;
	for(i=0;i<=max;i++) {
		cola[i]=0;
	}
}

void menu() {
	
	int respuesta;
	
	printf("\n\nQue desea registrar?:");
	printf("\n1.Ingresar nueva matricula.");
	printf("\n2.Eliminar matricula.");
	printf("\n3.Consultar listado actual.");
	printf("\n4.Consultar disponibilidad.");
	printf("\n5.Finalizar programa.\n\t");
	scanf("%i", &respuesta);
	switch(respuesta) {
		case 1: ingresarDato();
				menu();
				break;
		case 2: eliminarDato();
				menu();
				break;
		case 3: listado();
				menu();
				break;
		case 4: disponibilidad();
				menu();
				break;
		case 5: 
				break;
				default: printf("ERROR: numero ingresado erroneo");
	}
}

void ingresarDato() {
	if(final<max) {
		final=final+1;
		printf("\n\nIngrese nueva matricula: ");
		scanf("%i", &cola[final]);
	}
	else {
		printf("\n\nLa cola ya esta llena..");
	}
}

void eliminarDato() {
	int i;
	if(frente!=final) {
		cola[0] = 0;
		for(i=0;i<final;i++) {
			cola[i] = cola[i+1];
		}
		cola[final] = 0;
		final = final-1;
		printf("\nmatricula en posicion 1 elimanada..");
	}
	else {
		printf("\n\nLa cola ya esta vacia..");
	}
}

void listado() {
	int i;
	for(i=0;i<=final;i++) {
		printf("\nMatricula posicion %i: %i", i+1, cola[i]);
	}
}

void disponibilidad() {
	int i, AUX=0;
	for(i=0;i<=max;i++) {
		if(cola[i]<=0) {
			AUX++;
		}
	}
	printf("\nLa disponibilidad es de %i posiciones extra!", AUX);
}
