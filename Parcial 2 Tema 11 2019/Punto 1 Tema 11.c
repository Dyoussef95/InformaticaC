//punto1_tema11
#include <stdio.h>

int esPerfecto(int x);

int main(){
	int i;
	
	for(i=10;i<=99;i++){
		if(esPerfecto(i)==1){
			printf("Numero perfecto: %d",i);
		}
	}
	
}

int esPerfecto(int x){
	int b=0,suma=0,divisor,i;
	
	for(i=1;i<x;i++){
		if(x % i == 0){
			suma=suma+i;
		}
	}
	
	if(suma == x){
		b=1;
	}
	
	return b;
}
