#include <iostream>
#include <string>

class Mascota {
	private:
		std::string nombre;
		std::string sexo;
		std::string tipoMascota;
		int edadMeses;
		std::string size;
		bool conviveConNinos;
		bool conviveConOtrasMascotas;
		bool adoptado;

	public:
		Mascota(){
			std::string auxNombre;
			std::cout << "Dame el nombre de la Mascota: ";
			std::cin >> auxNombre;
			nombre = auxNombre;

			std::string auxSexo;
			std::cout << "Dame el sexo de la Mascota: ";
			std::cin >> auxSexo;
			sexo = auxSexo;

			std::string auxTipoMascota;
			std::cout << "Dame el tipo de la Mascota: ";
			std::cin >> auxTipoMascota;
			tipoMascota = auxTipoMascota;

			int auxEdadMeses;
			std::cout << "Dame la edad de la Mascota en meses: ";
			std::cin >> auxEdadMeses;
			edadMeses = auxEdadMeses;

			std::string auxSize;
			std::cout << "Dame el tamaño de la Mascota (xs, s, m, l, xl, xxl: ";
			std::cin >> auxSize;
			size = auxSize;

			std::string auxConviveConNinos;
			std::cout << "La Mascota convive con niños: ";
			std::cin >> auxConviveConNinos;
			if (auxConviveConNinos == "si")
			{
				conviveConNinos = true;
			}
			else {
				conviveConNinos = false;
			}

			std::string auxConviveConOtrasMascotas;
			std::cout << "La Mascota convive con otros animales: ";
			std::cin >> auxConviveConOtrasMascotas;
			if (auxConviveConOtrasMascotas == "si")
			{
				conviveConOtrasMascotas = true;
			}
			else {
				conviveConOtrasMascotas = false;
			}

			adoptado = false;

		}
		std::string getNombre() {
			return nombre;
		}

		std::string getSexo() {
			return sexo;
		}

		std::string getTipoMascota() {
			return tipoMascota;
		}

		int getEdadMeses() {
			return edadMeses;
		}

		std::string getSize() {
			return size;
		}

		bool getConviveConNinos() {
			return conviveConNinos;
		}

		bool getConviveConOtrasMascotas() {
			return conviveConOtrasMascotas;
		}

		void setNombre(std::string newName) {
			nombre = newName;
		}

		void setSexo(std::string newSexo) {
			sexo = newSexo;
		}

		void setTipoMascota(std::string newTipoMascota) {
			tipoMascota = newTipoMascota;
		}

		void setEdadMeses(int newEdadMeses) {
			edadMeses = newEdadMeses;
		}

		void setSize(int newSize) {
			size = newSize;
		}

		void setConviveConNinos(bool newConviveConNinos) {
			conviveConNinos = newConviveConNinos;
		}

		void setConviveConOtrasMascotas(bool newConviveConOtrasMascotas) {
			conviveConOtrasMascotas = newConviveConOtrasMascotas;
		}
		void menuModificacionMascota(){
            int opcionMascota;
            std::cout << "Que quieres modificar?" << std::endl;
            std::cout << "1) Nombre" << std::endl;
            std::cout << "2) Edad" << std::endl;
            std::cin >> opcionMascota;

            switch (opcionMascota)
            {
            case 1:
            {
                std::cout << "Nuevo Nombre: ";
                std::string nuevoNombre;
                std::cin >> nuevoNombre;
                setNombre(nuevoNombre);
                break;
            }
        case 2:
            {
                std::cout << "Nueva Edad: ";
                std::string nuevaEdad;
                std::cin >> nuevaEdad;
                setNombre(nuevaEdad);
                break;
            }
        	}
        }
};

class Persona {
	private:
		std::string nombre;
		std::string telefono;
		std::string correoElectronico;
		std::string direccion;

	public:
		Persona(){
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
	
		std::string getNombre() {
			return nombre;
		} 

		std::string getTelefono() {
			return telefono;
		} 

		std::string getCorreoElectronico() {
			return correoElectronico;
		} 

		std::string getDireccion() {
			return direccion;
		} 

		void setNombre(std::string newName) {
			nombre = newName;
		} 

		void setTelefono(std::string newTelefono) {
			telefono = newTelefono;
		} 

		void setCorreoElectronico(std::string newCorreoElectronico) {
			correoElectronico = newCorreoElectronico;
		} 

		void setDireccion(std::string newDireccion) {
			direccion = newDireccion;
		} 

};

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
};

class EstudioAdopcion {
	private:
		 std::string fecha;
		 std::string lugar;
		 int hijos;
		 int mascotasExistentes;
		 int tiempoParaMascota;
		 std::string actividadFisica;

	public:
		EstudioAdopcion(){
			std::string auxFecha;
			std::cout << "Fecha: ";
			std::cin >> auxFecha;
			fecha = auxFecha;

			std::string auxLugar;
			std::cout << "Lugar de la adopcion: ";
			std::cin >> auxLugar;
			lugar = auxLugar;

			int auxHijos;
			std::cout << "Cantidad de hijos de los adoptantes: ";
			std::cin >> auxHijos;
			hijos = auxHijos;

			int auxMascotasExistentes;
			std::cout << "Cantidad de mascotas que tienen los adoptantes: ";
			std::cin >> auxMascotasExistentes;
			mascotasExistentes = auxMascotasExistentes;

			int auxTiempoParaMascotas;
			std::cout << "Cantidad de tiempo que se le dedicara a la mascota: ";
			std::cin >> auxTiempoParaMascotas;
			tiempoParaMascota = auxTiempoParaMascotas;

			std::string auxActividadFisica;
			std::cout << "Nivel de actividad fisica de la persona (B, M, A): ";
			std::cin >> auxActividadFisica;
			actividadFisica = auxActividadFisica;
		}

		std::string getFecha() {
			return fecha;
		} 
		std::string getLugar() {
			return lugar;
		} 
		int getHijos () {
			return hijos;
		}
		int getMascotasExistentes() {
			return mascotasExistentes;
		}
		int getTiempoParaMascota() {
			return tiempoParaMascota;
		}
		std::string getActividadFisica() {
			return actividadFisica;
		} 

		void setFecha(std::string newFecha) {
			fecha = newFecha;
		} 
		void setLugar(std::string newLugar) {
			lugar = newLugar;
		} 
		void setHijos(int newHijos) {
			hijos = newHijos;
		} 
		void setMascotasExistentes(int newMascotasExistentes) {
			mascotasExistentes = newMascotasExistentes;
		} 
		void setTiempoParaMascotas(int newTiempoParaMascotas) {
			tiempoParaMascota = newTiempoParaMascotas;
		} 
		void setActividadFisica(std::string newActividadFisica) {
			actividadFisica = newActividadFisica;
		} 

};

int main() {
	int opcion = -1;
	std::vector<Rescatista> rescatistas;
	std::vector<Mascota> mascotas;

	do
	{
		do
		{
			std::cout << "1) Dar de alta Rescatista" << std::endl;
			std::cout << "2) Listar Rescatistas" << std::endl;
            std::cout << "3) Modificar Rescatistas" << std::endl;
            std::cout << "4) Dar de alta Mascota" << std::endl;
            std::cout << "5) Listar Mascotas" << std::endl;
            std::cout << "6) Modificar Mascota" << std::endl;
            std::cout << "7) Dar de alta adoptante" << std::endl;
            std::cout << "8) Modificar Adoptante" << std::endl;
            std::cout << "9) Listar Adoptantes" << std::endl;
            std::cout << "10) Iniciar Estudio de Adopcion" << std::endl;
            std::cout << "11) Dar Mascota en Adopcion" << std::endl;
			std::cout << "20) Salir" << std::endl;
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
			for(int i = 0; i < rescatistas.size(); i++){
				std::cout << rescatistas[i].getNombre() << std::endl;
				std::cout << rescatistas[i].getCuotaRecuperacion() << std::endl;
			}
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
			for(int i = 0; i < mascotas.size(); i++){
				std::cout << mascotas[i].getNombre() << std::endl;
				std::cout << mascotas[i].getEdadMeses() << std::endl;
			}
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
    	}
		case 20:
			break;
		default:
			break;
		}
	} while (opcion != 20);

	return 0;
}