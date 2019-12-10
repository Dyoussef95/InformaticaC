//punto2_tema12
#include <stdio.h>

void cargarVector(float v[],int n);
void mostrarVector(float v[],int n);
float calcularSuma(float v[],int n);

int main(){
	int n;
	float v[100],suma;
	
	printf("Ingrese el tamanio del vector: ");
	scanf("%d",&n);
	
	cargarVector(v,n);
	printf("Vector a: ");
	mostrarVector(v,n);
	
	suma = calcularSuma(v,n);
	
	printf("\n\nLa suma es: %.2f",suma);
	
		
	return 0;
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

float calcularSuma(float v[],int n){
	int i;
	float suma=0;
		
	for(i=0;i<n;i++){
		suma=suma+v[i];
	}
	
	return suma;
}
