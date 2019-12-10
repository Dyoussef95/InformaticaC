//punto1_tema14
#include <stdio.h>

int calcular(int n);

int main(){
	int n,suma;
	
	do{
		printf("Ingrese un valor: ");
		scanf("%d",&n);
	}while(n<=0);
	
	suma = calcular(n);
	
	printf("El resultado es: %d",suma);
	
	return 0;
}

int calcular(int n){
	int suma=0,i;
	for(i=1;i<=n;i++){
		if(i%2==0){
			suma=suma-i;	
		}else{
			suma=suma+i;
		}
	}
	
	return suma;
}
