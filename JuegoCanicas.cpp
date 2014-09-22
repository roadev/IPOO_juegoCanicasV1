/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 04/09/14
 * Versión: 0.2.1
 * 
 * Nombre de la Clase: main
 * Responsabilidad: 
 * Colaboración: 

 */

#include "JuegoCanicas.h"

JuegoCanicas::JuegoCanicas() {
    
    if (numCanicas < 0){

    cout<<"El número de Canicas nunca puede ser menor que cero"<<endl;
}
    numCanicas = 5;
}

JuegoCanicas::~JuegoCanicas() {
}

void JuegoCanicas::comprarCanicas() {
    numCanicas += 15;
}

void JuegoCanicas::ganaCanica() {
    numCanicas ++;
}

void JuegoCanicas::pierdeCanica() {
    numCanicas --;
}

void JuegoCanicas::romperBolsa() {
    numCanicas = 0;
}

int JuegoCanicas::getRetornarCanicas() {
    return numCanicas;
}