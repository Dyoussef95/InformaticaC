//punto1_tema6
#include <stdio.h>

int ingresarDistintoCero();
void simplificar(int n,int d);

int main(){
	int n,d;
	
	printf("Ingrese un valor: ");
	scanf("%d",&n);
	
	d = ingresarDistintoCero();
	
	printf("Fraccion ingresada: %d/%d",n,d);
	
	simplificar(n,d);
	
	return 0;
	
}

int ingresarDistintoCero(){
	int x;
	do{
		printf("Ingrese un numero distinto de cero: ");
		scanf("%d",&x);
	}while(x==0);//controlo que el numero sea distinto que 0
	
	return x;
}

void simplificar(int n,int d){
	int b,i;//declaro una bandera
	
	do{
		b=0;//doy valor 0 a la bandera
		for(i=2;i<d;i++){//utilizo un for para i desde 2 hasta el d(el menor de los numeros)
			if(d % i == 0 && n % i == 0){//si ambos numeros son divisibles en i, reemplazo los valores
				d=d/i;
				n=n/i;
				b=1;//si se realizo una modificacion doy valor 1 a la bandera
			}
		}
	}while(b==1);//si la bandera vale 1 vuelvo a controlar
	
	printf("\nFraccion simplificada:%d/%d",n,d);
	
	
	return;
}
