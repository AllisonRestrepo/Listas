#include <iostream>
using namespace std;

//creacion del nodo, la lista
struct nodo{
    int info;
    struct nodo *sig;
};

//creacion de la lista con una funcion 
void crear_lista(struct nodo**cab,int i){ //le decirmo que le pasaremo sun puntero y un entero par ala cantidad
    struct nodo *p; //le decimos que tendremos otro puntero para otra lista
    *cab =nullptr; //el primer nodo va a estar vacio y solo apuntara al segundo nodo
    while(i>0){ //hacemos una funcion para que se haga las veces que queremos 
        p = new nodo; //reservamos memoria con new y el tipo de dato que en etse caso en nodo
        p->info = i; // le decimo que en el nuevo nodo le ponga la info
        p->sig = *cab; //luego de poner info se va a ir al siguiente apuntador pero es cab
        *cab = p; //cab va a apuntar a p que es el anterior, entonces simpre apuntaran juntos al mismo
        i = i-1; //cada que se ejecute el programa le restara 1 para que sea solo las veces que deseamos.
    }
}

int main(){
    nodo *lista =nullptr;
    crear_lista(&lista,5); //utilizamos la funcion crear lista pra crear una lista de 5

    //para mostrar la lista se hace otra funcion 
    nodo *temporal = lista;
    while (temporal != nullptr){
        cout<<temporal->info<<" ";
        temporal = temporal->sig;
    }cout<<endl;

    return 0;
}
