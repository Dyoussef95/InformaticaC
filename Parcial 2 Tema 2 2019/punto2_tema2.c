//punto2_tema2
#include <stdio.h>

void cargarVector(int n,float v[]);
float calcularProdEscalar(float a[],float b[],int n);

int main(){
	float a[100],b[100],prodEscalar;
	int n;
	
	printf("Ingrese el tamanio de los vectores: ");
	scanf("%d",&n);
	printf("\nIngrese el vector 1:\n");
	cargarVector(n,a);
	printf("\nIngrese el vector 2:\n");
	cargarVector(n,b);
	
	prodEscalar=calcularProdEscalar(a,b,n);
	
	printf("\nEl producto escalar es: %.1f",prodEscalar);
	
	return 0;
}

//funcion para cargar un vector
void cargarVector(int n,float v[]){
	int i;
	for(i=0;i<n;i++){
		printf("Ingrese un valor: ");
		scanf("%f",&v[i]);
	}
	return;
}

//funcion para calcular el producto escalar
float calcularProdEscalar(float a[],float b[],int n){
	float resultado=0;//declaro un acumulador
	int i;
	for(i=0;i<n;i++){
		resultado=resultado+(a[i]*b[i]);//al acumulador le sumo el resultado del producto de los miembros en la misma posicion
	}
	return resultado;
}
