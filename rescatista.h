/*
 * Clase Rescatista contiene los atributos y métodos genéricos para el manejo de adoptantes.
 */
#ifndef RESCATISTA_H_
#define RESCATISTA_H_
#include <iostream>
#include <string>
#include "Persona.h"

//Declaracion de clase Rescatista la cual es hija de la clase persona
class Rescatista : public Persona {
	private:
        //Declaracion de atributos del objeto
		double cuotaRecuperacion;

	public:
        //Declaracion de los metodos del objeto
		Rescatista();

        double getCuotaRecuperacion();
        void setCuotaRecuperacion(double newCuotaRecuperacion);
        void menuModificacionRescatista();
        
};

/**
 * Constructor por default
 * @return Objeto Rescatista
 */
Rescatista::Rescatista(){
    double auxCuotaDeRecuperacion;
    std::cout << "Dame la cuota de recuperacion de la persona: ";
    std::cin >> auxCuotaDeRecuperacion;
    cuotaRecuperacion = auxCuotaDeRecuperacion;
}

/**
 * getter de la cuota de recuperacion del rescatista
 * @param que es esto
 * @return string: cuota de recuperacion del rescatista
*/
double Rescatista::getCuotaRecuperacion(){
    return cuotaRecuperacion;
}

/**
 * setter de la cuota de recuperacion del rescatista
 * @param que es esto
 * @Modificacion de la cuota de recuperacion del rescatista
*/
void Rescatista::setCuotaRecuperacion(double newCuotaRecuperacion){
    cuotaRecuperacion = newCuotaRecuperacion;
}

/**
 * Menu para la modificacion de varios atributos de los objetos de rescatistas
 * @param
 * @Modificacion de los atributos a eleccion del usuario
*/
void Rescatista::menuModificacionRescatista(){
    int opcionRescatista;
    std::cout << "Que quieres modificar?" << std::endl;
    std::cout << "1) Telefono" << std::endl;
    std::cout << "2) Correo Electronico" << std::endl;
    std::cout << "3) Direccion" << std::endl;
    std::cout << "4) Cuota de recuperacion" << std::endl;
    std::cin >> opcionRescatista;

    switch (opcionRescatista)
    {
        case 1:
        {
            std::cout << "Nuevo Telefono: ";
            std::string nuevoTelefono;
            std::cin >> nuevoTelefono;
            setTelefono(nuevoTelefono);
            break;
        }
        case 2:
        {
            std::cout << "Correo Electronico: ";
            std::string nuevoCorreo;
            std::cin >> nuevoCorreo;
            setCorreoElectronico(nuevoCorreo);
            break;
        }
        case 3:
        {
            std::cout << "Direccion: ";
            std::string nuevaDireccion;
            std::cin >> nuevaDireccion;
            setDireccion(nuevaDireccion);
            break;
        }
        case 4:
        {
            std::cout << "Cuota de recuperacion: ";
            double nuevaCuota;
            std::cin >> nuevaCuota;
            setCuotaRecuperacion(nuevaCuota);
            break;
        }
        default:
        break;
    }
}

#endif






