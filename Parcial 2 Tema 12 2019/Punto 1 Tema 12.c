//punto1_tema12
#include <stdio.h>

int ingresarEnteroPositivo();
int sumarPares(int x);

int main(){
	int x,sumaPares;
	
	x = ingresarEnteroPositivo();
	
	sumaPares = sumarPares(x);
	
	printf("\n\nLa suma de los pares es: %d",sumaPares);
}

int ingresarEnteroPositivo(){
	int x;
	do{
		printf("Ingrese un numero entero positivo: ");
		scanf("%d",&x);
	}while(x<=0);//controlo que el numero sea mayor que 0
	
	return x;
}

int sumarPares(int x){
	int suma=0,dig;
	
	do{
		dig=x % 10;
		x= x/10;
		if(dig % 2 == 0){
			suma=suma+dig;
		}
		
	}while(x>0);
	
	return suma;
}
