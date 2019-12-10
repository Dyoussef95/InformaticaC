//punto2_tema5
#include <stdio.h>

void cargarVector(float v[],int n);
void mostrarVector(float v[],int n);
void invertirVector(float v[],int n);

int main(){
	int n;
	float v[100];
	
	printf("Ingrese el tamanio del vector: ");
	scanf("%d",&n);
	
	cargarVector(v,n);
	printf("Arreglo dado: ");
	mostrarVector(v,n);
	
	invertirVector(v,n);
	printf("\n\nArreglo invertido: ");
	mostrarVector(v,n);
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
		printf("V = %.1f,",v[i]);
	}
}

void invertirVector(float v1[],int n){
	int i,aux;
	float v2[n];
	
	for(i=0;i<n;i++){
		v2[n-i-1]=v1[i];
	}
	
	for(i=0;i<n;i++){
		v1[i]=v2[i];
	}
}
