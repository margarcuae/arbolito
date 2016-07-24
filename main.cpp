#include "tabulador.h"
#include <iostream>
using namespace std;
#include "analizador.h"
#include "parser.h"

int main(){

     /*
     * generarVector( limiteIzquierdo, limiteDerecho , Diferencial )
     */
    /*
        Parser * p = new Parser("sin x");
        Analizador * a = new Analizador(p->parsear());

        Arbol * ar = new Arbol(a->postorden());
        ar->crearArbol();
*/


    Tabulador * t = new Tabulador("cos(x)*sin(y)");
    auto datos = t->generarVector(0,10,0,10,1);


    cout << "main: " << "X  " << " "<< "Y  " << " " << "Z"<<endl;
    for (auto i: datos){
        cout << "       " << i[0] << "   "<<i[1] << "   " << i[2]<<endl;
    }

    /*
     * Aqui las dimensiones deberias poner ->setDimensiones(2,t->dimX,t->dimY)
     */
    //cout << "Dim x:  " << t->dimX  << "Dim Y: " << t->dimY << endl;


}

