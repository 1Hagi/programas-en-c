#include<stdio.h>

char apellidoNombre[20], respuesta;
int horas;
float salario;

float salarioSemanal(int);

int main() {
	horas = 0;
	salario = 0.0;
	respuesta = 'S';
	printf("Datos de empleados de la empresa:\n\n");
	while(respuesta == 'S' || respuesta == 's') {
		printf("Ingrese apellido y nombre: ");
		scanf("%[^\n]s", &apellidoNombre);
		fflush(stdin);
		printf("Ingrese horas trabajadas: ");
		scanf("%d", &horas);
		fflush(stdin);
		salario = salarioSemanal(horas);
		printf("\n\tSalario del trabajador: %.2f", salario);
		printf("\n\nDesea ingresar mas datos?('S' si,'N' no): ");
		scanf("%c", &respuesta);
		fflush(stdin);
	}
	return 0;
}

float salarioSemanal(S) {
	
	float AUX = 0.0;
	
	if(S<=35) {
		AUX = S * 125;
	}
	else {
		AUX = 35 * 125;
		S = S - 35;
		AUX = S * 140 + AUX;
	}
	return AUX;
}
