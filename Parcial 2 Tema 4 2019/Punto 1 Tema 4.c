//punto1_tema4
#include<stdio.h>

int calcularSuma(int n1,int n2);

int main(){
	int n1,n2,suma;
	
	printf("Ingrese n1: ");
	scanf("%d",&n1);
	
	do{
		printf("Ingrese n2 (>n1): ");
		scanf("%d",&n2);
	}while(n2<=n1);
	
	suma = calcularSuma(n1,n2);
	
	printf("La suma es: %d",suma);
	
	return 0;
}

int calcularSuma(int n1,int n2){
	int i,suma=0;
	
	for(i=n1;i<=n2;i++){
		suma=suma+i;
	}
	
	return suma;
}
