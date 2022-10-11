#include<stdio.h>

void iniciarProceso();
void ingresarDatos();
void grabarRegistro();
void finalizarProceso();
void ingresarRespuesta();

typedef struct{
	int dni;
	char nombreApell[20];
	int codCarrera;
	char genero;
	int  edad;
}tr_alumno;

tr_alumno vr_alumno;
FILE *vf_alumno;
char respuesta;

int main() {
	iniciarProceso();
	ingresarRespuesta();
	while(respuesta == 's' || respuesta == 'S') {
		ingresarDatos();
		grabarRegistro();
		ingresarRespuesta();
	}
	finalizarProceso();
	return 0;
}

void iniciarProceso() {
	vf_alumno = fopen("Alumnos.dat", "wb");
	printf("Archivo Binario de datos de Alumnos\n");
}

void ingresarDatos() {
	printf("Ingrese DNI: ");
	scanf("%i", &vr_alumno.dni);
	fflush(stdin);
	printf("Ingrese Nombre y Apellido(sin espacios): ");
	scanf("%s", &vr_alumno.nombreApell);
	printf("Ingrese codigo de carrera..\n");
	printf("(1.Lic. Sistemas de Inf. 2.Bioquimica 3.Agrimensura): ");
	scanf("%i", &vr_alumno.codCarrera);
	fflush(stdin);
	printf("Ingrese genero M/F: ");
	scanf("%c", &vr_alumno.genero);
	printf("Ingrese edad: ");
	scanf("%i", &vr_alumno.edad);
}

void grabarRegistro() {
	fwrite(&vr_alumno, sizeof(tr_alumno), 1, vf_alumno);
}

void ingresarRespuesta() {
	fflush(stdin);
	printf("\nDesea agregar datos de un nuevo alumno? s/n: ");
	scanf("%c", &respuesta);
}

void finalizarProceso() {
	fclose(vf_alumno);
}
