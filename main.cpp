/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 04/09/14
 * Versión: 0.2.1
 * 
 * Nombre de la Clase: main
 * Responsabilidad: 
 * Colaboración: 

 */

#include "JuegoCanicas.h"

    JuegoCanicas juliana; // Creación del objeto/variable global "juliana"
    JuegoCanicas mario; //Creación del objeto/variable global "mario"

void jugar(string nombreJugador, bool gana){
    
    if( ((nombreJugador == "juliana") && (gana)) || ((nombreJugador == "mario") && (!gana)) ) {
		juliana.ganaCanica();
		mario.pierdeCanica();		
	}

	if( ((nombreJugador == "mario") && (gana)) || ((nombreJugador == "juliana") && (!gana)) ) {
		mario.ganaCanica();
		juliana.pierdeCanica();		
	}
}
void iniciarJuego(){
    //inicia el Juego

    cout<<"Inicia Juego"<<endl;        
    cout<<"Número de canicas de Juliana: "" "<<juliana.getRetornarCanicas()<<endl;
    cout<<"Número de canicas de Mario: "" "<<mario.getRetornarCanicas()<<endl<<endl;
    
    /*jugar("Juliana", false);*/
    cout<<"¡ Juliana comienza el juego lanzando su canica !"<<endl;
   
    jugar("mario", true);
    cout<<"                 Turno 1"<<endl;
    cout<<"Juliana tiene: "<<juliana.getRetornarCanicas()<<" y Mario tiene: "<<mario.getRetornarCanicas()<<endl;
 
    jugar("juliana", true);
    cout<<"                 Turno 2"<<endl;
    cout<<"Juliana tiene: "<<juliana.getRetornarCanicas()<<" y Mario tiene: "<<mario.getRetornarCanicas()<<endl;
    
    jugar("mario", false);
    cout<<"                 Turno 3"<<endl;
    cout<<"Juliana tiene: "<<juliana.getRetornarCanicas()<<" y Mario tiene: "<<mario.getRetornarCanicas()<<endl;
    
    jugar("juliana", true);
    cout<<"                 Turno 4"<<endl;
    cout<<"Juliana tiene: "<<juliana.getRetornarCanicas()<<" y Mario tiene: "<<mario.getRetornarCanicas()<<endl;
    
    mario.comprarCanicas();     
    cout<<"                 Turno 5"<<endl;
    cout<<"          Mario compra 15 Canicas   "<<endl;
    cout<<"Juliana tiene: "<<juliana.getRetornarCanicas()<<" y Mario tiene: "<<mario.getRetornarCanicas()<<endl;
    
    mario.romperBolsa();
    
    //termina Juego
    
}

void terminarJuego(){
    cout<<"A Mario se le rompe la bolsa de sus canicas"<<endl;        
    cout<<"Juliana tiene: "<<juliana.getRetornarCanicas()<<" y Mario tiene: "<<mario.getRetornarCanicas()<<endl;
}

int main() {
    iniciarJuego();
    terminarJuego();
}
