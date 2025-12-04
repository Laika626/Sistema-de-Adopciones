/*
 * Clase Adopcion contiene los atributos y métodos necesarios.
 */
#ifndef ADOPCION_H_
#define ADOPCION_H_
#include <iostream>
#include <string>
#include "Persona.h"
#include "adoptante.h"
#include "rescatista.h"
#include "CentroAdopcion.h"


//Declaracion de clase Adopcion
class Adopcion {
	private:
	//Declaracion de atributos del objeto
	std::string status;
	Adoptante *adoptante;
	Mascota *mascota;
	Rescatista *rescatista;
	EstudioAdopcion estudioAdopcion;

	public:
		 //Declaracion de metodos del objeto
		Adopcion(Adoptante *auxAdoptante, Mascota *auxMascota, Rescatista *auxRescatista);
		std::string getStatus();
		void setStatus(std::string newStatus);
		void imprimirAdopcionLight();
		void modificacionStatusAdopcion();
	
};

/**
 * Constructor por default
 * @return Objeto adopcion
 */
Adopcion::Adopcion(Adoptante *auxAdoptante, Mascota *auxMascota, Rescatista *auxRescatista){
	adoptante = auxAdoptante;
	mascota = auxMascota;
	rescatista = auxRescatista;


	std::string auxStatus;
	std::cout << "Status(aprobada, rechasada, en proceso): ";
	std::cin >> auxStatus;
	status = auxStatus;
}

/**
 * getter status
 * @param que es esto
 * @return string: status
*/
std::string Adopcion::getStatus() {
	return status;
} 

/**
 * setter status
 * @param que es esto
 * @Modificacion string: status
*/
void Adopcion::setStatus(std::string newStatus) {
	status = newStatus;
} 

/**
 * Funcion que imprime los datos necesarios del Estudio de adopciones
 * @imprimer strings
*/
void Adopcion::imprimirAdopcionLight(){
	std::cout << "Mascota: " << mascota->getNombre() << std::endl;
	std::cout << "Adoptante: " << adoptante->getNombre() << std::endl;
	std::cout << "Rescatista: " << rescatista->getNombre() << std::endl;
	std::cout << "Status: " << status << std::endl;
}

/**
 * Funcion que modifica el status de adopcion de una mascota
 * @Modificacion string: status
*/
void Adopcion::modificacionStatusAdopcion(){
	std::cout << "Nuevo Status de adopcion: ";
    std::string nuevoStatus;
    std::cin >> nuevoStatus;
    setStatus(nuevoStatus);
}



#endif



