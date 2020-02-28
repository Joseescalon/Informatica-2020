#include <iostream>

using namespace std;

//Numero 1

bool divisionSegura(int numerador, int denominador, int*respuesta){
   
    
    if(denominador == 0){
        std::cout << "Error\n";
        return false;
    } else {
       int final = (numerador/denominador);
       *respuesta = final;
        return true;
    }
}

//Numero 2

bool sumaMayor (int[] valores, int cantidad, int**respuesta ){
    int* num(int valores[], int cantidad) {									         

	int* num1=&valores[0];													 

	 for (int i=0; i<cantidad; i++) {										  
		 if (valores[i]>*num1) {
		   	num1=&valores[i];
		}
	}
	return num1;                                                                  
}

int* num2(int valores[], int cantidad) {										  

	int* numero=&valores[0];

		for (int i=0; i<cantidad; i++) { 										 
			if ((valores[i]>*numero)&&(&valores[i]!=num(valores, cantidad))) {  
				numero = &valores[i];
		}
	}

	return numero;
}

bool sumaMayor(int valores[], int cantidad, int** respuesta) {						
	if (cantidad>1) {															
		 
		respuesta[0]=num(valores, cantidad);									    
		respuesta[1]=num2(valores, cantidad);										
		
		
		return true;
		
	}
	
	else {
		
		return false;
	}
}


}

//Numero 3

int funcionN(int n) {																

	if (n==0) {
		
		return 0;
	}
		
	else if (n==1) {
																						
		return 1;
	}
	
	else {
		
		return ((funcionN(n-1))+(funcionN(n-2))); 								
	}
}

void fibonacciN(const int n, int* valores) {

	for (int i=0; i<n; i++) {
		valores[i] = funcionN(i);
	}

}

//Numero 4 

int fibonnacciNopt(int x) {																

	int x1=0;																			
	int x2=1;
	int x3;


	for (int i=0; i<x; i++) {														
	
		x3=x1+x2;
		x1=x2;
		x2=x3;
		
	}
	
	return x1;																			
}

void fibonacciNopt(const int x, int* numeros) { 										


	for (int i=0; i<x; i++) {
		
		numeros[i] = fibonnacciNopt(i);
		
	}

}


int main()
{
    


    return 0;
}
