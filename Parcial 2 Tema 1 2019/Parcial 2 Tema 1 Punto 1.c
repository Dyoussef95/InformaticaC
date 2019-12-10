#include <stdio.h>

int main(){
	int n,x,i,sumaPares=0,cantPares=0;
	int sumaImpares=0,cantImpares=0,cantCero=0;
	float promPares,promImpares;
	
	do{
		printf("Ingrese la cantidad: ");
		scanf("%d",&n);
	}while(n<=0);
	
	for(i=0;i<n;i++){
		printf("Ingrese un valor: ");
		scanf("%d",&x);
		if(x==0){
			cantCero=cantCero+1;
		}else if(x % 2 == 0){
			cantPares=cantPares+1;
			sumaPares=sumaPares+x;
		}else{
			cantImpares=cantImpares+1;
			sumaImpares=sumaImpares+x;
		}
	}
	if(cantPares != 0){
		promPares=sumaPares/cantPares;		
		printf("\nEl promedio de los pares: %f",promPares);
	}
	if(cantImpares != 0){
		promImpares=sumaImpares/cantImpares;
		printf("\nEl promedio de los impares es: %f",promImpares);
	}	
	printf("\nLa cantidad de 0 es: %d",cantCero);
}
