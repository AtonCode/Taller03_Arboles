// alias push="git add . && git commit -m ".gitignore" && git push"
//alias pull="git pull"
// alias run="g++ -std=c++11 main.cpp && ./a.out"

#include<iostream>
#include "TadsArboles/ArbolBinarioOrd.h"
using namespace std;


int main()
{
  system("clear");
    ArbolBinarioOrd<int> arbol(12);
    if(arbol.insertar(7)){
      cout << "Se inserto el nodo correctamente" << endl;
    }
    else{
      cout << "No se inserto el nodo" << endl;
    }
    if(arbol.insertar(6)){
      cout << "Se inserto el nodo correctamente" << endl;
    }
    else{
      cout << "No se inserto el nodo" << endl;
    }
        

    
    cout << "Raiz del arbol: " << arbol.obtenerDatoRaiz() << endl;
  
    cout << "La altura del arbol es: " << arbol.altura() << endl;
  //Falta implementar esta funcion
    //cout << "El tamanio del arbol es: " << arbol.tamano(arbol.obtenerRaiz()) << endl;
  
    cout << "El arbol ordenado por pre-orden es el siguiente: ";
    arbol.preOrden(arbol.obtenerRaiz());
    cout << endl;
    cout << "El arbol ordenado por in-orden es el siguiente: ";
    arbol.inOrden(arbol.obtenerRaiz());
    cout << endl;
    cout << "El arbol ordenado por pos-orden es el siguiente: ";
    arbol.posOrden(arbol.obtenerRaiz());
    cout << endl;
    cout << "El arbol ordenado por nivel-orden es el siguiente: ";
    arbol.nivelOrden(arbol.obtenerRaiz());
    cout << endl;

    
    cout << "El arbol ordenado por pre-orden es el siguiente: ";
    arbol.preOrden(arbol.obtenerRaiz());
    cout << endl;
    cout << "El arbol ordenado por in-orden es el siguiente: ";
    arbol.inOrden(arbol.obtenerRaiz());
    cout << endl;
    cout << "El arbol ordenado por pos-orden es el siguiente: ";
    arbol.posOrden(arbol.obtenerRaiz());
    cout << endl;
    cout << "El arbol ordenado por nivel-orden es el siguiente: ";
    arbol.nivelOrden(arbol.obtenerRaiz());
    cout << endl;
  
    return 0;
}

