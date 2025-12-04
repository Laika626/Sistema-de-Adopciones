#include <iostream>
#include <string>
#include "Persona.h"
#include "adoptante.h"
#include "rescatista.h"
#include "CentroAdopcion.h"



class Adopcion {
	private:
	std::string status;
	Adoptante *adoptante;
	Mascota *mascota;
	Rescatista *rescatista;
	EstudioAdopcion estudioAdopcion;

	public:
	Adopcion(Adoptante *auxAdoptante, Mascota *auxMascota, Rescatista *auxRescatista){
		adoptante = auxAdoptante;
		mascota = auxMascota;
		rescatista = auxRescatista;


		std::string auxStatus;
		std::cout << "Status(aprobada, rechasada, en proceso): ";
		std::cin >> auxStatus;
		status = auxStatus;
	}

	std::string getStatus() {
			return status;
		} 

	void setStatus(std::string newStatus) {
			status = newStatus;
		} 


	void imprimirAdopcionLight(){
		std::cout << "Mascota: " << mascota->getNombre() << std::endl;
		std::cout << "Adoptante: " << adoptante->getNombre() << std::endl;
		std::cout << "Rescatista: " << rescatista->getNombre() << std::endl;
		std::cout << "Status: " << status << std::endl;
	}

	void modificacionStatusAdopcion(){
		std::cout << "Nuevo Status de adopcion: ";
        std::string nuevoStatus;
        std::cin >> nuevoStatus;
        setStatus(nuevoStatus);
    	
	}
	
};
