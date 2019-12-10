//punto2_tema7
#include <stdio.h>

void cargarVector(float v[],int n);
void mostrarVector(float v[],int n);
void calcularcocientes(float a[],float b[],int n);

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
	
	calcularcocientes(a,b,n);	
	
}

void cargarVector(float v[],int n){
	int i;
	
	for(i=0;i<n;i++){
		printf("Ingrese un valor: ");
		scanf("%f",&v[i]);
	}
}

void cargarVectorDistintoCero(float v[],int n){
	int i;
	
	for(i=0;i<n;i++){
		do{
		printf("Ingrese un valor distinto de 0: ");
		scanf("%f",&v[i]);
		}while(v[i]==0);
	}
}

void mostrarVector(float v[],int n){
	int i;
	
	for(i=0;i<n;i++){
		printf("\nV = %.1f, ",v[i]);
	}
}

void calcularcocientes(float a[],float b[],int n){
	int i;
	float coci;
	
	printf("\n\nVector cocientes: ");
	for(i=0;i<n;i++){
		coci=(a[i]/b[i]);
		printf("%.1f, ",coci);
	}
}
