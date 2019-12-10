//punto1_tema8
#include <stdio.h>

int esPar(int n);
int esImpar(int n);

int main(){
	int numero,i=1,posicionpar,posicionimpar,par,impar,b=0,z=0;
	
	printf("Ingrese un valor (ingrese el 0 para finalizar: ");
	scanf("%d",&numero);
	par=numero;
	impar=numero;
	
	while(numero != 0){
		
		// analizo si el numero es par u verifico si es mayor que el anterior numero par ingresado
		
		if (esPar(numero)==1){	
			if (numero>par){			
				par=numero;
				posicionpar=i;
				b=1; // La bandera me indica si se ingreso un numero par
			}
		}
		// si no es par por lo tanto es impar y verifico si es menor que el anterior numero impar ingresado
		if (esImpar(numero)==1){
			if (numero<impar){			
					impar=numero;
					posicionimpar=i;
							
				}	
				z=1; // La bandera me indica si se ingreso un numero impar	
			}
		i++;
		
		// sigo ingresando nuevos numeros		
		printf("Ingrese un valor (ingrese el  0 para finalizar: ");
		scanf("%d",&numero);	
	}	
	
	if(b==1){	
		printf("\nEl mayor numero par ingresado es: %d y se lo ingreso en la posicion %d\n",par,posicionpar);
	}
	else printf("\nNo se ingresaron numero pares\n");
	
	
	if(z==1){
		printf("\nEl menor numero impar ingresado es: %d y se lo ingreso en la posicion %d\n",impar,posicionimpar);
	}
	else printf("\nNo se ingresaron numero impares\n");
	
	return 0;
}

int esPar(int n){
	int r;		
	
	if(n % 2 == 0){
		r = 1;
	}
	else r = 0;
	
	return r;
}

int esImpar(int n){
	int r;		
	
	if(n % 2 == 1){
		r = 1;
	}
	else r = 0;
	
	return r;
}
