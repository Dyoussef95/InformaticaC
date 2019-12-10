//punto2_tema6
#include <stdio.h>

void cargarVector(float v[],int n);
void mostrarVector(float v[],int n);
void calcularPromedios(float a[],float b[],int n);

int main(){
	int n;
	float a[100],b[100];
	
	printf("Ingrese el tamanio del vector: ");
	scanf("%d",&n);
	
	cargarVector(a,n);
	printf("Vector a: ");
	mostrarVector(a,n);
	printf("\n\n");
	cargarVector(b,n);
	printf("Vector b:  ");
	mostrarVector(a,n);
	
	calcularPromedios(a,b,n);	
	
}

void cargarVector(float v[],int n){
	int i;
	
	for(i=0;i<n;i++){
		printf("Ingrese un valor: ");
		scanf("%f",&v[i]);
	}
}

void mostrarVector(float v[],int n){
	int i;
	
	printf("V = ");
	for(i=0;i<n;i++){
		printf("%.1f, ",v[i]);
	}
}

void calcularPromedios(float a[],float b[],int n){
	int i;
	float prom;
	
	printf("\n\nVector promedios: ");
	for(i=0;i<n;i++){
		prom=(a[i]+b[i])/2;
		printf("%.1f, ",prom);
	}
}
