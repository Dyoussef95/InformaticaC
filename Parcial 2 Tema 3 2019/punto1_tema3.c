//punto1_tema3
#include <stdio.h>

int ingresarPositivo();

int main(){
	int n,peso,h,pesoMin,hPesoMin,hMax,pesoHMax,i;
	
	n=ingresarPositivo();
	
	for(i=0;i<n;i++){
		printf("Ingrese la altura: ");
		scanf("%d",&h);
		printf("Ingrese el peso: ");
		scanf("%d",&peso);
		
		if(i==0){
			pesoMin=peso;
			hPesoMin=h;
			hMax=h;
			pesoHMax=peso;
		}else{
			if(peso<pesoMin){
				pesoMin=peso;
				hPesoMin=h;
			}
			if(h>hMax){
				hMax=h;
				pesoHMax=peso;
			}
		}
	}
	
	printf("El menor peso es: %d - Su altura es: %d",pesoMin,hPesoMin);
	printf("\nLa mayor altura es: %d - Su peso es: %d",hMax,pesoHMax);
	
	return 0;
}

int ingresarPositivo(){
	int x;
	
	do{
		printf("Ingrese la cantidad de personas: ");
		scanf("%d",&x);
	}while(x<1);
	
	
	return x;
}





