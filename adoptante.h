/*
 * Clase Adoptante contiene los métodos genéricos para el manejo de adoptantes.
 */

#ifndef ADOPTANTE_H_
#define ADOPTANTE_H_
#include <iostream>
#include <string>
#include "Persona.h"

// Declaracion de clase Adoptante la cual es hija de la clase persona
class Adoptante : public Persona {
 private:
    // Declaracion de atributos del objeto
    std::string ocupacion;
    std::string tipoVivienda;

 public:
    // Declaro los métodos que va a tener el objeto
    Adoptante();
    Adoptante(
        std::string c_nombre,
        std::string c_telefono,
        std::string c_correoElectronico,
        std::string c_direccion,
        std::string c_ocupacion,
        std::string c_tipoVivienda);

    std::string getOcupacion();
    std::string getTipoVivienda();
    void setOcupacion(std::string newOcupacion);
    void setTipoVivienda(std::string newTipoVivienda);
    void menuModificacionAdoptante();
};

/**
 * Constructor por default
 * @return Objeto adoptante
 */
Adoptante::Adoptante() {
}

Adoptante::Adoptante(
            std::string c_nombre,
            std::string c_telefono,
            std::string c_correoElectronico,
            std::string c_direccion,
            std::string c_ocupacion,
            std::string c_tipoVivienda) : Persona(
                c_nombre,
                c_telefono,
                c_correoElectronico,
                c_direccion),
                ocupacion(c_ocupacion),
                tipoVivienda(c_tipoVivienda) {}

/**
 * getter de ocupacion del adoptante
 * @param que es esto
 * @return string: ocupacion del adoptante
*/
std::string Adoptante::getOcupacion() {
    return ocupacion;
}

/**
 * getter de tipo de vivienda
 * @param
 * @return string: tipo de vivienda en la cual vive el adoptante
*/
std::string Adoptante::getTipoVivienda() {
    return tipoVivienda;
}

/**
 * setter de nueva ocupacion del adoptante
 * @param
 * @Cambia el el string ocupacion 
*/
void Adoptante::setOcupacion(std::string newOcupacion) {
    ocupacion = newOcupacion;
}

/**
 * setter nombre
 * @param
 * @Cambia el string de tipo de vivienda
*/
void Adoptante::setTipoVivienda(std::string newTipoVivienda) {
    tipoVivienda = newTipoVivienda;
}

/**
 * Menu para la modificacion de varios atributos de los objetos de adoptantes
 * @param
 * @Modificacion de los atributos a eleccion del usuario
*/
void Adoptante::menuModificacionAdoptante() {
    int opcionAdoptante;
    std::cout << "Que quieres modificar?" << std::endl;
    std::cout << "1) Telefono" << std::endl;
    std::cout << "2) Correo Electronico" << std::endl;
    std::cout << "3) Direccion" << std::endl;
    std::cout << "4) Ocupacion" << std::endl;
    std::cin >> opcionAdoptante;

    switch (opcionAdoptante) {
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
            std::cout << "Ocupacion: ";
            std::string nuevaOcupacion;
            std::cin >> nuevaOcupacion;
            setOcupacion(nuevaOcupacion);
            break;
        }
        default:
        break;
        }
}
#endif
