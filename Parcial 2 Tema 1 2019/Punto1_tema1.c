#include <stdio.h>

int ingresarPositivo();

int main(){
	int n,x,i,cp=0,ci=0,ap=0,ai=0,cCero=0;//declaro contadores y acumuladores
	float promP,promI;
	n = ingresarPositivo();//ingreso la cantidad de numeros con una funcion
	for(i=0;i<n;i++){
		printf("Ingrese un numero: ");
		scanf("%d",&x);//ingreso un numero
		if(x!=0){//controlo si es distinto de 0
			if(x % 2 == 0){//controlo si es par
				cp++;
				ap=ap+x;
			}else{//control si es impar
				ci++;
				ai=ai+x;
			}
		}else{//control si es igual a 0
			cCero++;
		}
	}
	promP=ap/cp;//calculo promedios
	promI=ai/ci;
	
	printf("\nPromedio pares: %.2f",promP);
	printf("\nPromedio impares: %.2f",promI);
	printf("\nCantidad de 0: %d",cCero);
	
}

int ingresarPositivo(){
	int n;
	do{
		printf("Ingrese un numero positivo: ");
		scanf("%d",&n);
	}while(n<1);
	return n;
}
