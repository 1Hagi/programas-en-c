#include <stdio.h>
#include <stdbool.h>
#define MAX 12

/*declaracion de tipos de datos perzonalizados*/

typedef int tArregloInt [MAX];

typedef struct{
	tArregloInt discos;
	int tope;
}tPilaDiscos;
/*declaracion de variables globales*/
tPilaDiscos pilaDisco;

/*declaracion de prototipos de funciones*/
void inicializarPila();
bool pilaVacia(tPilaDiscos);
bool pilaLlena(tPilaDiscos);
void apilar(int);
void desapilar();
int	elementoentope(tPilaDiscos);
void mostrarPila();
float promedio();
void menu();
/*funcion principal*/
int main (){
	inicializarPila();
	menu();
	
return 0;	
}

void inicializarPila(){
	pilaDisco.tope = -1;
	printf("pila inicializada! \n");
}	
bool pilaVacia(tPilaDiscos pDisco){
	return (pDisco.tope == -1);
}
bool pilaLlena(tPilaDiscos pDisco){
	return (pDisco.tope == MAX -1);
}
void apilar(int pElem){
	if( !pilaLlena(pilaDisco) ){
		/* La pila tiene lugar, se puede agregar un elemento */
 	pilaDisco.tope++;
		/* pilaChar.tope = pilaChar.tope + 1; // pilaChar+=1;*/
		pilaDisco.discos[pilaDisco.tope] = pElem;
		printf("disco apilado");
		}else{
			printf("no hay lugar");
	}
}
void desapilar(){
	if( pilaVacia(pilaDisco) == true ){
	printf("Pila vacia!!!\n");
	}else{
	/* La pila tiene elementoS, se puede quitar el del tope */
		pilaDisco.discos[pilaDisco.tope] = ' ';
		pilaDisco.tope--; /* pilaChar.tope = pilaChar.tope - 1; // pilaChar-=1;*/
		printf("Disco eliminado!\n");
		}	
}
void mostrarPila(tPilaDiscos pDisco){
	int i;
	
	if( !pilaVacia(pDisco) ){
		for(i=0; i<=pDisco.tope; i++){
		printf( "%d | ", pDisco.discos[i] );
		
		}	
	}else{
		printf("No hay disco");
		}
}
int	elementoentope(tPilaDiscos pDisco){
	return pDisco.discos[pDisco.tope];
}
float promedio(tPilaDiscos pDisco){
	int i;
	int acumDisco;
	for(i=0; i<=pDisco.tope; i++){
		acumDisco=acumDisco + pDisco.discos[i];
				
	}
	return (acumDisco/i);
}

/*un menu que muestras las opciones disponible al usuario*/
void menu(){
	fflush(stdin);
	int opcion;
	printf("\n*****MENU DE OPCIONES*****\n");
	printf("1) Apilar un disco \n2) Desapilar un disco \n3) Mostrar los disco\n");
	printf("4) Mostrar ultimo disco \n5) Calcular promedio\n");
	printf("Pulse 0 p/salir\n");
	scanf("%d",&opcion);
	fflush(stdin);
	switch(opcion){
		case 1:{
		int auxPeso;	
		printf("Ingresar peso del disco: ");
		scanf("%d",&auxPeso);
		apilar(auxPeso);
		menu();
		break;
		}
		case 2:{
		desapilar();
		menu();
		break;
		}
		case 3:{
		mostrarPila(pilaDisco);
		menu();
		break;
		}
		case 4:{
		printf("Ultimo disco es: %d",elementoentope(pilaDisco));
		menu();
		break;
		}
		case 5:{
		printf("promedio es: %f",promedio(pilaDisco));
		menu();
		break;
		}
		
	}
}
   


