/*
 * Clase persona contiene los atributos y métodos genéricos para el manejo de personas.
 * Clase que contiene 2 hijas, adoptante y rescatista
 */
#ifndef PERSONA_H_
#define PERSONA_H_
#include <iostream>
#include <string>


// Declaracion de clase Persona
class Persona {
 private:
    // Declaracion de atributos de la clase persona
    std::string nombre;
    std::string telefono;
    std::string correoElectronico;
    std::string direccion;

 public:
    // Declaracion de metodos de la clase persona
    Persona();
    Persona(
        std::string c_nombre,
        std::string c_telefono,
        std::string c_correoElectronico,
        std::string c_direccion);

    std::string getNombre();
    std::string getTelefono();
    std::string getCorreoElectronico();
    std::string getDireccion();
    void setNombre(std::string newName);
    void setTelefono(std::string newTelefono);
    void setCorreoElectronico(std::string newCorreoElectronico);
    void setDireccion(std::string newDireccion);
};

/**
 * Constructor por default
 * @return Objeto persona
 */
Persona::Persona() {
}

Persona::Persona(
    std::string c_nombre,
    std::string c_telefono,
    std::string c_correoElectronico,
    std::string c_direccion) {
    nombre = c_nombre;
    telefono = c_telefono;
    correoElectronico = c_correoElectronico;
    direccion = c_direccion;
}

/**
 * getter de nombre de persona
 * @param que es esto
 * @return string: nombre de persona
*/
std::string Persona::getNombre() {
    return nombre;
}

/**
 * getter de telefono de persona
 * @param que es esto
 * @return string: telefono
*/
std::string Persona::getTelefono() {
    return telefono;
}

/**
 * getter del correo electronico
 * @param que es esto
 * @return string: correo electronico
*/
std::string Persona::getCorreoElectronico() {
    return correoElectronico;
}

/**
 * getter de direccion
 * @param que es esto
 * @return string: direccion
*/
std::string Persona::getDireccion() {
    return direccion;
}

/**
 * setter de ocupacion del nombre
 * @param que es esto
 * @modificacion del nombre
 * Tal vez quitar
*/
void Persona::setNombre(std::string newName) {
    nombre = newName;
}

/**
 * setter del telefono
 * @param que es esto
 * @Modificacion del telefono
*/
void Persona::setTelefono(std::string newTelefono) {
    telefono = newTelefono;
}

/**
 * setter del correo electronico
 * @param que es esto
 * @modificacion del correo electronico
*/
void Persona::setCorreoElectronico(std::string newCorreoElectronico) {
    correoElectronico = newCorreoElectronico;
}

/**
 * setter de la direccion
 * @param que es esto
 * @Modificacion del adoptante
*/
void Persona::setDireccion(std::string newDireccion) {
    direccion = newDireccion;
}

#endif
