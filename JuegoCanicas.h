/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 04/09/14
 * Versión: 0.2.1
 * 
 * Nombre de la Clase: main
 * Responsabilidad: 
 * Colaboración: 

 */

#include <iostream>
#include <string>
using namespace std;
#ifndef JUEGOCANICAS_H
#define	JUEGOCANICAS_H

class JuegoCanicas {

private: //Atributos

    int numCanicas; 
    
public: // Métodos
    
    JuegoCanicas();

    ~JuegoCanicas();
    
    void comprarCanicas();
    void ganaCanica();
    void pierdeCanica();
    void romperBolsa(); 
    // GET 
    int getRetornarCanicas();
};
#endif	/* JUEGOCANICAS_H */