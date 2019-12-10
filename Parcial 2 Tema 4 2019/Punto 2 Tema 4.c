//punto2_tema4
#include<stdio.h>

void cargarVector(int n,int v[]);
void encontrarMayor(int n,int v[]);

int main(){
	int n,v[100];
	
	printf("Ingrese el tamanio del vector: ");
	scanf("%d",&n);
	
	cargarVector(n,v);
	
	encontrarMayor(n,v);
	
	return 0;
}

void cargarVector(int n,int v[]){
	int i;
	
	for(i=0;i<n;i++){
		printf("Ingrese un valor: ");
		scanf("%d",&v[i]);
	}
}

void encontrarMayor(int n,int v[]){
	int i,mayor,posMayor,b=0;
	mayor=v[0];
	posMayor=0;
	for(i=0;i<n;i++){
		if(mayor<v[i]){
			mayor=v[i];
			posMayor=i;
		}
		if(mayor!=v[i]){
			b=1;
		}
	}
	
	if(b==1){
		printf("El mayor elemento es: %d - En la posicion %d",mayor,posMayor);
	}else{
		printf("Todos los elementos son iguales");
	}
	
	return;
}
