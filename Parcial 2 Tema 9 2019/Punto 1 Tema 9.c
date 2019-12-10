//punto1_tema9
#include<stdio.h>

void mostrarFibonacci(int n1,int n2);

int main(){
	int n1,n2;
	
	printf("Ingrese n1: ");
	scanf("%d",&n1);
	
	do{
		printf("Ingrese n2 (>n1): ");
		scanf("%d",&n2);
	}while(n2<=n1);
	
	mostrarFibonacci(n1,n2);
	
	return 0;
}

void mostrarFibonacci(int n1,int n2){
	int i,prim,seg,fibo;
	prim=0;
	seg=1;
	do{
		fibo=prim+seg;
		prim=seg;
		seg=fibo;
		if(fibo> n1 && fibo<n2){
			printf("\n%d",fibo);
		}
	}while(fibo<=n2);
	
 return;
}
