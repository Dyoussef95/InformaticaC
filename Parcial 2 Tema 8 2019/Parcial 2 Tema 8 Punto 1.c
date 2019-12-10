#include <stdio.h>

int main(){
	int n,x,i,mayorPar=0,menorImpar=0,posMayorPar,posMenorImpar;
	
	printf("Ingrese la cantidad: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("Ingrese un valor: ");
		scanf("%d",&x);
		
		if(x % 2 == 1 && menorImpar == 0 ){
			menorImpar=x;
			posMenorImpar=i;	
		}
		
		if(x != 0 && x % 2 == 0 && mayorPar == 0){
			mayorPar=x;
			posMayorPar=i; 
		}
		
		if(x != 0 && x % 2 == 0){
			if(mayorPar < x ){
				mayorPar=x;
				posMayorPar=i;
			}
		}else if(x % 2 == 1){
			if(menorImpar>x){
				menorImpar=x;
				posMenorImpar=i;
			}
		}	
	}
	
	if(menorImpar == 0){
		printf("No se ingreso impar");
	}else{
		printf("El menor impar es:%d posicion:%d",menorImpar,posMenorImpar);
	}
	
	if(mayorPar == 0){
		printf("\nNo se ingreso par");
	}else{
		printf("\nEl mayor par es:%d posicion:%d",mayorPar,posMayorPar);
	}
	
	return 0;
}
