/*
 * Clase persona contiene los atributos y métodos genéricos para el manejo de personas.
 * Clase que contiene 2 hijas, adoptante y rescatista
 */
#include <iostream>
#include <string>
#define Persona

//Declaracion de clase Persona
class Persona {
	//Declaracion de atributos de la clase persona
	private:
		std::string nombre;
		std::string telefono;
		std::string correoElectronico;
		std::string direccion;

	public:
		//Declaracion de metodos de la clase persona
		Persona();

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
 * @return Objeto Persona
 */
Persona::Persona(){
	std::string auxNombre;
	std::cout << "Dame el nombre de la persona: ";
	std::cin >> auxNombre;
	nombre = auxNombre;

	std::string auxTelefono;
	std::cout << "Dame el Telefono de la persona: ";
	std::cin >> auxTelefono;
	telefono = auxTelefono;

	std::string auxCorreoElectronico;
	std::cout << "Dame el correo electronico de la persona: ";
	std::cin >> auxCorreoElectronico;
	correoElectronico = auxCorreoElectronico;

	std::string auxDireccion;
	std::cout << "Dame la direccion de la persona: ";
	std::cin >> auxDireccion;
	direccion = auxDireccion;
}

/**
 * getter de nombre de persona
 * @param que es esto
 * @return string: nombre de persona
*/
std::string getNombre() {
	return nombre;
} 

/**
 * getter de telefono de persona
 * @param que es esto
 * @return string: telefono
*/
std::string getTelefono() {
	return telefono;
}

/**
 * getter del correo electronico
 * @param que es esto
 * @return string: correo electronico
*/
std::string getCorreoElectronico() {
	return correoElectronico;
} 

/**
 * getter de direccion
 * @param que es esto
 * @return string: direccion
*/
std::string getDireccion() {
	return direccion;
} 

/**
 * setter de ocupacion del nombre
 * @param que es esto
 * @modificacion del nombre
 * Tal vez quitar
*/
void setNombre(std::string newName) {
	nombre = newName;
} 

/**
 * setter del telefono
 * @param que es esto
 * @Modificacion del telefono
*/
void setTelefono(std::string newTelefono) {
	telefono = newTelefono;
} 

/**
 * setter del correo electronico
 * @param que es esto
 * @modificacion del correo electronico
*/
void setCorreoElectronico(std::string newCorreoElectronico) {
	correoElectronico = newCorreoElectronico;
} 

/**
 * setter de la direccion
 * @param que es esto
 * @Modificacion del adoptante
*/
void setDireccion(std::string newDireccion) {
	direccion = newDireccion;
} 

#endif





