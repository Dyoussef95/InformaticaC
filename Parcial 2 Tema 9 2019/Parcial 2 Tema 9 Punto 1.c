#include <stdio.h>

void mostrarFibonacci(int N1, int N2);

int main(){
	int N2,N1;
	
	printf("Ingrese N1: ");
	scanf("%d",&N1);
	
	do{
		printf("Ingrese N2: ");
		scanf("%d",&N2);
	}while(N2<=N1);
	
	mostrarFibonacci(N1,N2);
	
	return 0;
}

void mostrarFibonacci(int N1, int N2){
	int prim=0,seg=1,fibo;
	
	do{
		fibo=prim+seg;
		prim=seg;
		seg=fibo;
		if(fibo>N1 && fibo<N2){
			printf("%d ",fibo);
		}
	}while(fibo<N2);
}
