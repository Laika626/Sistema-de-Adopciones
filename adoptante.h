#include <iostream>
#include <string>

class Adoptante : public Persona {
	private:
		std::string ocupacion;
		std::string tipoVivienda;

	public:
		Adoptante(){
			std::string auxOcupacion;
			std::cout << "Dame la ocupación de la persona: ";
			std::cin >> auxOcupacion;
			ocupacion = auxOcupacion;

			std::string auxTipoVivienda;
			std::cout << "Dame el tipo de vivienda de la persona: ";
			std::cin >> auxTipoVivienda;
			tipoVivienda = auxTipoVivienda;
		}

		std::string getOcupacion(){
			return ocupacion;
		}

		std::string getTipoVivienda(){
			return tipoVivienda;
		}

		void setOcupacion(std::string newOcupacion){
			ocupacion = newOcupacion;
		}

		void setTipoVivienda(std::string newTipoVivienda){
			tipoVivienda = newTipoVivienda;
		}
		void menuModificacionAdoptante(){
            int opcionAdoptante;
            std::cout << "Que quieres modificar?" << std::endl;
            std::cout << "1) Telefono" << std::endl;
            std::cout << "2) Correo Electronico" << std::endl;
            std::cout << "3) Direccion" << std::endl;
            std::cout << "4) Ocupacion" << std::endl;
            std::cin >> opcionAdoptante;

            switch (opcionAdoptante)
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
};