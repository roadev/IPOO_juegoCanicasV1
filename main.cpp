/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 04/09/14
 * Versión: 0.1.1
 * 
 * Nombre de la Clase: main
 * Responsabilidad: 
 * Colaboración: 

 */

#include "juego_canicas.h"ganarCanica
#include <iostream>
using namespace std;

void iniciarJuego(){
    JuegoCanicas juliana; // Creación del objeto juliana
    JuegoCanicas mario; //Creación del objeto mario
    
    //termina Juego
    cout<<"Inicia Juego"<<endl;        
    cout<<"Número de canicas de Juliana: "" "<<juliana.getRetornarCanicas()<<endl;
    cout<<"Número de canicas de Mario: "" "<<mario.getRetornarCanicas()<<endl<<endl;
    
    /*jugar("Juliana", false);*/
    cout<<"1. Juliana comienza el juego lanzando su canica"<<endl;
    /*jugar("Mario", true);*/
    juliana.perderCanica(); 
    mario.ganarCanica();
    cout<<"Turno 2"<<endl;
    cout<<"Juliana tiene: "<<juliana.getRetornarCanicas()<<" y Mario tiene: "<<mario.getRetornarCanicas()<<endl;
 
    /*jugar("Juliana", true);*/
    juliana.ganarCanica(); 
    mario.perderCanica();     
    cout<<"3. Número de canicas de Juliana: "" "<<juliana.getRetornarCanicas()<<endl;
    cout<<"3. Número de canicas de Mario: "" "<<mario.getRetornarCanicas()<<endl;
    /*jugar("Mario", false);*/
    juliana.ganarCanica(); 
    mario.perderCanica(); 
    cout<<"4. Número de canicas de Juliana: "" "<<juliana.getRetornarCanicas()<<endl;
    cout<<"4. Número de canicas de Mario: "" "<<mario.getRetornarCanicas()<<endl;
    /*jugar("Juliana", true);*/
    juliana.ganarCanica(); 
    mario.perderCanica();
    cout<<"5. Número de canicas de Juliana: "" "<<juliana.getRetornarCanicas()<<endl;
    cout<<"5. Número de canicas de Mario: "" "<<mario.getRetornarCanicas()<<endl;
    mario.comprarCanicas();     
    cout<<"6. Número de canicas de Juliana: "" "<<juliana.getRetornarCanicas()<<endl;
    cout<<"6. Número de canicas de Mario: "" "<<mario.getRetornarCanicas()<<endl;
    mario.romperBolsa();
    
    //termina Juego
    cout<<"A Mario se le rompe la bolsa de sus canicas"<<endl;        
    cout<<"Número de canicas de Juliana: "" "<<juliana.getRetornarCanicas()<<endl;
    cout<<"Número de canicas de Mario: "" "<<mario.getRetornarCanicas()<<endl;
}

void terminarJuego(){
    
}

int main() {
    iniciarJuego();
}
