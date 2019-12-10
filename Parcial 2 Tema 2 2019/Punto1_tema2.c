//Punto1_Tema2
#include <stdio.h>

//Declaro el prototipo de la funcion
void generarFibonacci();

int main(){
	
	//Invoco la funcion
	generarFibonacci();
	
	return 0;
}

//Desarrollo la funcion
void generarFibonacci(){
	int prim,seg,fibo;//Declaro las variables para la serie
	prim=0;//Inicializo prim y seg
	seg=1;
	do{
		fibo=prim+seg;//Genero un numero fibonacci
		prim=seg;//Cambio los valores de prim y seg para general el siguiente numero
		seg=fibo;
		if(fibo>99 && fibo<1000){//Controlo si fibo tiene 3 digitos
			printf("\nFibonacci: %d",fibo);//Muestro el numero
		}
	}while(fibo<1000);//El ciclo termina cuando fibo tenga mas de 3 digitos 
	
	return;
}
