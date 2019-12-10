//punto1_tema5
#include <stdio.h>

int ingresarEnteroPositivo();
void esPerfecto(int x);

int main(){
	int x;
	
	x=ingresarEnteroPositivo();
	
	esPerfecto(x);
	
	return 0;
}

int ingresarEnteroPositivo(){
	int x;
	do{
		printf("Ingrese un numero entero positivo: ");
		scanf("%d",&x);
	}while(x<=0);//controlo que el numero sea mayor que 0
	
	return x;
}

void esPerfecto(int x){
	int suma=0,i;
	
	for(i=1;i<x;i++){//hago un for desde 1 hasta x-1
		if(x % i == 0){//me fijo si el contador es divisor de x
			suma=suma+i;//calculo la suma de los divisores
		}
	}
	
	if(suma = x){//verifico si la suma es igual al numero
		printf("El numero es perfecto");
	}else{
		printf("El numero no es perfecto");
	}
	
	return;
}
