#include<stdio.h>

float ventas[4][3];
int f, c;

void maxVenta();

int main() {
	printf("Ventas de Sucursal en 2019\n\n");
	for(f=0; f<4; f++) {
		for(c=0; c<3; c++) {
			printf("Ingrese venta Suc.%d Trimestre %d: ", f+1, c+1);
			scanf("%f", &ventas[f][c]);
		}
	}
	maxVenta();
	return 0;
}

void maxVenta() {
	int maxf, maxc;
	float AUX;
	
	for(f=0; f<4; f++) {
		for(c=0; c<3; c++) {
			if(ventas[f][c]>AUX) {
				AUX=ventas[f][c];
				maxf=f;
				maxc=c;	
			}
		}
	}
	
	printf("\n Maximo importe de ventas ingresado: \n\tSucursal %d Trimestre %d: %.2f$", maxf+1, maxc+1, AUX);
}
