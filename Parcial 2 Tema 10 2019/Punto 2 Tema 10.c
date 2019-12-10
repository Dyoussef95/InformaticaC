//punto2_tema10
#include <stdio.h>

void cargarVector(float v[],int n);
void mostrarVector(float v[],int n);
void calcularSumas(float a[],float b[],int n);

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
	
	calcularSumas(a,b,n);	
	
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
	
	for(i=0;i<n;i++){
		printf("\nV = %.1f, ",v[i]);
	}
}

void calcularSumas(float a[],float b[],int n){
	int i;
	float suma;
	
	printf("\n\nVector sumas: ");
	for(i=0;i<n;i++){
		suma=(a[i]+b[i]);
		printf("%.1f, ",suma);
	}
}
