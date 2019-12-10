//punto1_tema10
#include <stdio.h>

int ingresarPositivo();

int main(){
	int n,peso,h,pesoMax,hpesoMax,HMin,pesoHMin,i;
	
	n=ingresarPositivo();
	
	for(i=0;i<n;i++){
		printf("Ingrese la altura: ");
		scanf("%d",&h);
		printf("Ingrese el peso: ");
		scanf("%d",&peso);
		
		if(i==0){
			pesoMax=peso;
			hpesoMax=h;
			HMin=h;
			pesoHMin=peso;
		}else{
			if(peso>pesoMax){
				pesoMax=peso;
				hpesoMax=h;
			}
			if(h<HMin){
				HMin=h;
				pesoHMin=peso;
			}
		}
	}
	
	printf("El mayor peso es: %d - Su altura es: %d",pesoMax,hpesoMax);
	printf("\nLa menor altura es: %d - Su peso es: %d",HMin,pesoHMin);
	
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
