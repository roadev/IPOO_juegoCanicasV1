/* 
 * File:   JuegoCanicas.h
 * Author: Juan David Roa
 *
 * Created on 4 de septiembre de 2014, 05:27 PM
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
       
private: //Atributos

    int numCanicas; 
};

#endif	/* JUEGOCANICAS_H */

