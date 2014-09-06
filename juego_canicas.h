/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 04/09/14
 * Versión: 0.1.1
 * 
 * Nombre de la Clase: main
 * Responsabilidad: 
 * Colaboración: 

 */

#ifndef JUEGOCANICAS_H
#define	JUEGOCANICAS_H

class JuegoCanicas {

public: // Métodos
    
    JuegoCanicas();

    ~JuegoCanicas();
    
    void retornarCanicas();
    void agregarCanicas();
    void ganarCanicas();
    void perderCanicas();
    void perderTodo();

    //Get and Set

    void setAgregarCanicas();
    void setPerderCanicas();
    //void 
    int getRetornarCanicas();
   
private: //Atributos

    int numCanicas; 
};

#endif	/* JUEGOCANICAS_H */