//punto2_tema11
#include <stdio.h>

void cargarVector(float v[],int n);
void mostrarVector(float v[],int n);
float calcularPromedio(float v[],int n);

int main(){
	int n;
	float v[100],prom;
	
	printf("Ingrese el tamanio del vector: ");
	scanf("%d",&n);
	
	cargarVector(v,n);
	printf("Vector a: ");
	mostrarVector(v,n);
	
	prom = calcularPromedio(v,n);
	
	printf("\n\nEl promedio es: %.2f",prom);
	
		
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

float calcularPromedio(float v[],int n){
	int i;
	float prom,suma=0;
		
	for(i=0;i<n;i++){
		suma=suma+v[i];
	}
	prom=suma/n;
	
	return prom;
}
