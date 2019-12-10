//punto1_tema7
#include <stdio.h>
int ingresarDigito();
int contiene(int x,int a);
int main()
{
	int x,n,i,a,c=0;
	
	x = ingresarDigito();
	
	printf("Ingrese la cantidad: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Ingrese un numero: ");
		scanf("%d",&a);
		if(contiene(x,a)==1){
			c++;
		}
	}
	
	printf("La cantidad que contiene el digito es: %d",c);
	
	return 0;
}

int ingresarDigito(){
	int x;
	
	do{
		printf("Ingrese un digito: ");
		scanf("%d",&x);
	}while(x>9 || x<0);
	
	return x;
	
}

int contiene(int x,int a){
	int b=0,dig;
	
	while(a!=0){
		dig=a % 10;
		if(dig == x){
			b=1;
		}
		a = a /10;
	}
	
	return b;
}
