#include <iostream>
#include <string>
#include <Personas.h>
#include <adoptante.h>
#include <rescatista.h>
#include <CentroAdopcion.h>



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

	
};
