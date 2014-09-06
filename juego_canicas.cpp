/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 04/09/14
 * Versión: 0.1.1
 * 
 * Nombre de la Clase: main
 * Responsabilidad: 
 * Colaboración: 

 */

#include "juego_canicas.h"
#include <iostream>
using namespace std;

JuegoCanicas::JuegoCanicas() {
    
    if (numCanicas < 0){

    cout<<"El número de Canicas nunca puede ser menor que cero"<<endl;
}

    numCanicas = 5;
}

JuegoCanicas::~JuegoCanicas() {

}

void JuegoCanicas::retornarCanicas()
{
//    return numCanicas;
}

void JuegoCanicas::agregarCanicas()
{
    //numCanicas;
}

void JuegoCanicas::ganarCanicas()
{
    //numCanicas;
}

void JuegoCanicas::perderCanicas()
{
    
}

void JuegoCanicas::perderTodo()
{
    
}

int JuegoCanicas::getRetornarCanicas()
{
    return numCanicas;
}
