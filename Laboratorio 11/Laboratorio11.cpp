#include <iostream>
#include <vector>

using namespace std;



//1)
class Coleccion {
    public: 
    Coleccion(){};
    virtual int numerosV() = 0;
    virtual void meter(int numero) = 0;
    virtual int& operator[](const int i) = 0;   
};


//2)
class ColeccionVector : public Coleccion {
    public:
    ColeccionVector() : Coleccion(){};
    virtual int numerosV() override{
        return listaNum.size();        
    }
    virtual void meter(int numero) override{
        listaNum.push_back(numero);
    } 
    virtual int& operator[](const int i) override{
            return listaNum[i];
    }
     private:
    vector<int> listaNum;
};



//3)
class ColeccionLinkedList : public Coleccion {
    public:
    ColeccionLinkedList() : Coleccion (){
        valor = 0;
        rest = nullptr;
    }
    virtual int numerosV() override{
        ColeccionLinkedList* lista = (ColeccionLinkedList*)malloc(sizeof(ColeccionLinkedList));
        lista->valor = valor;
        lista->rest = rest;
	    int contador = 1;
	    if (lista->valor == 0 && lista->rest == nullptr) {
		    return 0;
	    }
    	else {
		    while (lista->rest != nullptr) {
			    contador++;
			    lista = lista->rest;
		    }
		    return contador;
	    }
    }
    
    virtual void meter(int value) override{
        if(valor == 0){
            valor = value;
        }
        else{
        ColeccionLinkedList *newRest = new ColeccionLinkedList;
        newRest->valor = value;
        newRest->rest = nullptr;
        
        ColeccionLinkedList* lista = this;
        
        while(lista->rest != nullptr){
            lista = lista->rest;
        }
        
        lista->rest = newRest;
        
        }
    }
    
    
    virtual int& operator[](const int lugar) override{
        
        ColeccionLinkedList* lista = this;
        
        for(int i = 0; i<lugar; i++){
            lista = lista->rest;
        }
        
        return lista->valor;
    }
    
    
    private:
    int valor;
    ColeccionLinkedList* rest;
    
    
};


//4
void ordenar(Coleccion& valores){
    
    int aux;
    
    for (int i=0; i<valores.numerosV() - 1; i++){
        for (int j = i + 1; j<valores.numerosV(); j++){
            if(valores[i]>valores[j]){
                aux = valores[i];
                valores[i] = valores[j];
                valores[j] = aux;
            }
        }
    }
    
};




int main()
{
    
    

    return 0;
}

