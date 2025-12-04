#include "Mascota.h"
#include "Persona.h"
#include "rescatista.h"
#include "adoptante.h"
#include "adopcion.h"
#include "utils.h"
#include <iostream>
#include <vector>

int main() {
	int opcion = -1;
	std::vector<Rescatista> rescatistas;
	std::vector<Mascota> mascotas;
	std::vector<Adoptante> adoptantes;

	do
	{
		do
		{
			clearScreen();
			std::cout << "Menu de opciones" << std::endl;
			std::cout << "1) Dar de alta Rescatista" << std::endl;
			std::cout << "2) Listar Rescatistas" << std::endl;
            std::cout << "3) Modificar Rescatistas" << std::endl;
            std::cout << "4) Dar de alta Mascota" << std::endl;
            std::cout << "5) Listar Mascotas" << std::endl;
            std::cout << "6) Modificar Mascota" << std::endl;
            std::cout << "7) Dar de alta adoptante" << std::endl;
            std::cout << "8) Listar Adoptante" << std::endl;
            std::cout << "9) Modificar Adoptantes" << std::endl;
            std::cout << "10) Llenar aplicacion de adopcion" << std::endl;
            std::cout << "11) Modificar aplicacion de adopcion" << std::endl;
			std::cout << "20) Salir" << std::endl;
			std::cout << "Selecciona una opcion: ";
			std::cin >> opcion;
		} while (opcion < 1 || opcion > 20);

		switch (opcion)
		{
		case 1:
		{
			Rescatista auxRescatista = Rescatista();
			rescatistas.push_back(auxRescatista);
			break;
		}
		case 2:
        {
			std::cout << "Seleccionaste opcion 2" << std::endl;
			std::cout << std::endl;
			for(int i = 0; i < rescatistas.size(); i++){
				std::cout << rescatistas[i].getNombre() << std::endl;
				std::cout << rescatistas[i].getCuotaRecuperacion() << std::endl;
				std::cout << std::endl;
			}
			esperar();
			break;
		}
        case 3:
        {
            std::cout << "Que rescatista quieres modificar" << std::endl;

            for(int i = 0; i < rescatistas.size(); i++){
                std::cout << i << rescatistas[i].getNombre() << std::endl;
            }
            int rescatistaElegido;
            std::cin >> rescatistaElegido;

            rescatistas[rescatistaElegido].menuModificacionRescatista();
            esperar();
            break;
        }
        case 4:
        {
            Mascota auxMascota = Mascota();
			mascotas.push_back(auxMascota);
			break;
        }
    	case 5:
    	{
    		std::cout << "Seleccionaste opcion 5" << std::endl;
    		std::cout << std::endl;
			for(int i = 0; i < mascotas.size(); i++){
				std::cout << mascotas[i].getNombre() << std::endl;
				std::cout << mascotas[i].getEdadMeses() << std::endl;
				std::cout << std::endl;
			}
			esperar();
			break;
    	}
    	case 6:
    	{
    		std::cout << "A cual mascota quieres modificar" << std::endl;

            for(int i = 0; i < mascotas.size(); i++){
                std::cout << i << mascotas[i].getNombre() << std::endl;
            }
            int mascotaElegida;
            std::cin >> mascotaElegida;

            mascotas[mascotaElegida].menuModificacionMascota();
            esperar();
            break;
    	}
    	case 7:
    	{
    		Adoptante auxAdoptante = Adoptante();
			adoptantes.push_back(auxAdoptante);
			break;
    	}
    	case 8:
    	{
    		std::cout << "Seleccionaste opcion 8" << std::endl;
			std::cout << std::endl;
			for(int i = 0; i < adoptantes.size(); i++){
				std::cout << adoptantes[i].getNombre() << std::endl;
				std::cout << adoptantes[i].getOcupacion() << std::endl;
				std::cout << std::endl;
			}
			esperar();
			break;
    	}
    case 9:
    	{
    		std::cout << "A cual Adoptante quieres modificar" << std::endl;

            for(int i = 0; i < adoptantes.size(); i++){
                std::cout << i << adoptantes[i].getNombre() << std::endl;
            }
            int adoptanteElegido;
            std::cin >> adoptanteElegido;
            adoptantes[adoptanteElegido].menuModificacionAdoptante();
            esperar();
            break;
    	}
    case 10:
    	{
    		std::cout << "Que adoptante llenara la aplicacion de adopcion: " << std::endl;
    		for(int i = 0; i < adoptantes.size(); i++){
                std::cout << i << adoptantes[i].getNombre() << std::endl;
			}
			int adoptanteElegido;
            std::cin >> adoptanteElegido;

            std::cout << "Para que mascota se quiere llenar4 la aplicacion: " << std::endl;
    		for(int i = 0; i < mascotas.size(); i++){
                std::cout << i << mascotas[i].getNombre() << std::endl;
			}
			int mascotaElegida;
            std::cin >> mascotaElegida;

            std::cout << "Que rescatista hara la adopcion: " << std::endl;
    		for(int i = 0; i < rescatistas.size(); i++){
                std::cout << i << rescatistas[i].getNombre() << std::endl;
			}
			int rescatistaElegido;
            std::cin >> rescatistaElegido;

            Adopcion auxAdopcion = Adopcion(&adoptantes[adoptanteElegido], &mascotas[mascotaElegida], &rescatistas[rescatistaElegido]);

			esperar();
			break;
    	}
		case 20:
			break;
		default:
			break;
		}
	} while (opcion != 20);

	return 0;
}