#include <iostream>

struct Lista{
    int valor;
    lista* resto;
};

Lista* crear(const int* valores,const int cantidad){
    
    Lista* Lista2 = (Lista*)malloc(sizeof(Lista) * cantidad);
    
    for(int i = 0; i < cantidad; i++){
        Lista2[i].valor = valores[i];
    }
    
    return Lista2;
    
}

void eliminar(Lista* valores){
    if(valores == 0){
        std::cout << "Invalido.";
    } else {
        delete& valores -> valor;
    }
}

void unir(Lista* primera, Lista* segunda){
    Lista* aux;
	if (primera == nullptr) {
		primera = segunda;
	}
	else {
		if (segunda != nullptr) {
			aux = primera;
			while (aux->resto != nullptr) {
				aux = aux->resto;
			}
			aux->resto = segunda;
		}
	}
}


int longitud(const Lista* valores){
    int cont = 1;
    
    do(
        cont++;
        valores = valores->resto;
        ) while(valores->resto != nullptr);
}

bool lookup(const Lista* valores, const int indice, int& resultado){
    int contador = longitud(valores);
    int i = indice;
    
    if( i >= contador){
        return false;
    } else {
        do(
            i--;
            valores = valors ->resto;
            ) while(0 < i);
            resultado = valors->valor;
            return true;
            
    }
}

struct Triangulo {
    int p1[2];
    int p2 [2];
    int p3[2];
};

struct ListaTriangulos{
    Triangulo primero;
    ListaTriangulos* resto;
}


    float lado1(Triangulo triangulo) {

	float x2 = pow((triangulo.p1[0] - triangulo.p2[0]), 2);
	float y2 = pow((triangulo.p1[1] - triangulo.p2[1]), 2);

	float resultado = sqrt(x2 + y2);

	return resultado;
}

float lado2(Triangulo triangulo) {

	float x2 = pow((triangulo.p1[0] - triangulo.p3[0]), 2);
	float y2 = pow((triangulo.p1[1] - triangulo.p3[1]), 2);

	float resultado = sqrt(x2 + y2);

	return resultado;
}

float lado3(Triangulo triangulo) {

	float x2 = pow((triangulo.p2[0] - triangulo.p3[0]), 2);
	float y2 = pow((triangulo.p2[1] - triangulo.p3[1]), 2);

	float resultado = sqrt(x2 + y2);

	return resultado;
}


float area(const Triangulo& triangulo) {


	float s = (lado1(triangulo) + lado2(triangulo) + lado3(triangulo)) / 2;

	float areat = sqrt(s*(s - lado1(triangulo))*(s - lado2(triangulo))*(s - lado3(triangulo)));

	return areat;
}

int contarTriangulos(const ListaTriangulos* valores) {
	int contador = 1;
	if (valores->resto == nullptr) {
		return 0;
	}
	else {

		while (valores->resto != nullptr) {
			contador++;
			valores = valores->resto;
		}

		return contador;
	}
}

float areaPromedio(const ListaTriangulos* triangulos) {
	int cantidad = contarTriangulos(triangulos);

	float sumas = 0;

	for (int i = 0; i < cantidad; i++) {
		sumas = sumas + area(triangulos->primero);
		triangulos = triangulos->resto;
	}

	float promedio = sumas / cantidad;
	return promedio;
}




int main(){
    
}