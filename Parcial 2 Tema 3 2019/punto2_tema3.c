//punto2_tema3
#include<stdio.h>

void cargarVector(int n,int v[]);
void encontrarMenor(int n,int v[]);

int main(){
	int n,v[100];
	
	printf("Ingrese el tamanio del vector: ");
	scanf("%d",&n);
	
	cargarVector(n,v);
	
	encontrarMenor(n,v);
	
	return 0;
}

void cargarVector(int n,int v[]){
	int i;
	
	for(i=0;i<n;i++){
		printf("Ingrese un valor: ");
		scanf("%d",&v[i]);
	}
}

void encontrarMenor(int n,int v[]){
	int i,menor,posMenor,b=0;
	menor=v[0];
	posMenor=0;
	for(i=0;i<n;i++){
		if(menor>v[i]){
			menor=v[i];
			posMenor=i;
		}
		if(menor!=v[i]){
			b=1;
		}
	}
	
	if(b==1){
		printf("El menor elemento es: %d - En la posicion %d",menor,posMenor);
	}else{
		printf("Todos los elementos son iguales");
	}
	
	return;
}

