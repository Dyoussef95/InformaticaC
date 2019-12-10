//punto2_tema14
/* Ingresar un arreglo de numeros reales de orden n, luego debe mostrar el arreglo cargado y 
a continuacion el resultado de la suma de todos sus elementos*/

#include<stdio.h>

int ingresarPositivo();
void cargarVector(float V[], int n);
void mostrarVector(float V[], int n);
float calcularSuma(float V[], int n);

int main()
{
	int n,i;
	float v[20], suma=0;
	
	n=ingresarPositivo();
	
	cargarVector(v,n);
	
	mostrarVector(v,n);
	
	suma=calcularSuma(v,n);
	
	printf("El valor de la suma es: %f  ", suma);

	return 0;
}

int ingresarPositivo(){
	int n;
	
	do{
		printf("Ingrese el tamanio:");
		scanf("%d", &n);
	}while(n<1);
	
	return n;
}

void cargarVector(float v[], int n){
	int i;
	
	for(i=0; i<n; i++){
	 	printf("Ingrese un elemento:");
	 	scanf("%f", &v[i]);
	}
	
}

void mostrarVector(float v[], int n){
	int i;
	
	for(i=0; i<n; i++){
		printf("%f  ", v[i]);
	}
	
}

float calcularSuma(float v[], int n){
	int i;
	float suma=0;
	
	for(i=0; i<n; i++){
		suma=suma+v[i];
	} 

	return suma;	
}
