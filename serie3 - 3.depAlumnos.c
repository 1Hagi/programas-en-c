#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo {
	int numLibreta;
	char nombre[9];
	struct nodo *siguiente;
}tLista;

tLista *v_lista;

void inicializarLista();
void menu();
bool listaVacia();
void ingresarDato();
void insertarPrimero(int num, char nom);
void insertarAdelante(int num, char nom);
void visualizarElementos();
void eliminarPrimero();
void eliminarK();

int a;
char b;

int main() {
	inicializarLista();
	menu();
	return 0;
}

void inicializarLista() {
	v_lista = NULL;
}

void menu() {
	int opcion;
	system("cls");
	printf("** Opciones Disponibles **\n");
	printf("1.Ingresar primer dato.\n");
	printf("2.Ingresar siguiente dato.\n");
	printf("3.Visualizar elementos.\n");
	printf("4.Eliminar primer elemento.\n");
	printf("5.Eliminar k elemento.\n");
	printf("6.Salir del programa.\n");
	
	
	printf("\t\t\t ");
	scanf("%i", &opcion);
	switch(opcion) {
		case 1: ingresarDato();
				insertarPrimero(a, b);
				system("Pause");
				menu();
				break;
		case 2: ingresarDato();
				insertarAdelante(a, b);
				system("Pause");
				menu();
				break;
		case 3:	visualizarElementos();
				system("Pause");
				break;
		case 4: eliminarPrimero();
				system("Pause");
				menu();
				break;
		case 5: eliminarK();
				system("Pause");
				menu();
				break;
		case 6: 
				break;
		default:printf("Error: numero ingresado invalido..");
	}
}

bool listaVacia() {
	if(v_lista == NULL) {
		return true;
	}
	else {
		return false;
	}
}

void ingresarDato() {
	printf("\nIngrese numero de libreta: ");
	scanf("%i", &a);
	printf("Ingrese nombre alumno: ");
	scanf("%s", &b);
}

void insertarPrimero(int num, char nom) {
	v_lista = malloc(sizeof(tLista));
	v_lista->numLibreta = num;
	v_lista->nombre[0,1,2,3,4,5,6,7,8,9] = nom;
	v_lista->siguiente = NULL;
	printf("Primer dato ingresado correctamente..\n\n");
}

void visualizarElementos() { 
	tLista *aux; 
	aux = v_lista; 
	if (listaVacia() == false) { 
		while(aux != NULL) {
			printf("%i %s\n", aux->numLibreta, aux->nombre); 
			aux = aux->siguiente; 
		} 
	}
	else printf( "\nLa lista esta vacia!!\n" ); 
}

void insertarAdelante(int num, char nom) {
	tLista * nuevoNodo;
	nuevoNodo = malloc(sizeof(tLista));
	nuevoNodo->numLibreta = num;
	nuevoNodo->nombre[0,1,2,3,4,5,6,7,8,9] = nom; 
	nuevoNodo->siguiente = v_lista; 
	v_lista = nuevoNodo;
}

void eliminarPrimero() {
	tLista * aux; 
	aux = v_lista; 
	v_lista = v_lista ->siguiente;
	free(aux); 
	printf("Primer elemento eliminado!\n"); 
}

void eliminarK() {
	int k;
	printf("\ningrese k");
	scanf("%i", &k);
	tLista * nodoSuprimir, * aux; 
	int i; 
	aux = v_lista; 
	for(i = 1; i < k-1; i++) { 
		aux = aux->siguiente; 
	} 
	nodoSuprimir = aux->siguiente;
	aux->siguiente = nodoSuprimir->siguiente;
	free(nodoSuprimir);  
	printf("Elemento de la posición %d eliminado\n", k);
}
