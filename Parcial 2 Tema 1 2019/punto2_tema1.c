//punto2_tema1
#include <stdio.h>

void cargarVector(int n,float v[]);
float calcularModulo(int n, float v[]);

int main(){
	float a[100], modulo;
	int n;
	
	printf("Ingrese el tamanio del vector: ");
	scanf("%d",&n);
	
	cargarVector(n,a);
	
	modulo = calcularModulo(n,a);
	
	printf("El modulo es: %.2f",modulo);
	
}

void cargarVector(int n,float v[]){
	int i;
	for(i=0;i<n;i++){
		printf("Ingrese un valor: ");
		scanf("%f",&v[i]);
	}
	return;
}

float calcularModulo(int n, float v[]){
	float modulo,suma=0;//declaro un acumulador
	int i;
	
	for(i=0;i<n;i++){
		suma=suma+v[i]*v[i];//acumulo la suma de los cuadrados
	}
	modulo=sqrt(suma);//calculo la raiz cuadrada
	
	return modulo;
	
}
