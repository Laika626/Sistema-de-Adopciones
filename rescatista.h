#include <iostream>
#include <string>

class Rescatista : public Persona {
	private:
		double cuotaRecuperacion;

	public:
		Rescatista(){
			double auxCuotaDeRecuperacion;
			std::cout << "Dame la cuota de recuperacion de la persona: ";
			std::cin >> auxCuotaDeRecuperacion;
			cuotaRecuperacion = auxCuotaDeRecuperacion;
		}	

		double getCuotaRecuperacion(){
			return cuotaRecuperacion;
		}

		void setCuotaRecuperacion(double newCuotaRecuperacion){
			cuotaRecuperacion = newCuotaRecuperacion;
		}

        void menuModificacionRescatista(){
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
};