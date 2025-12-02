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
			std::cout << "Dame el tamaño de la Mascota (xs, s, m, l, xl, xxl): ";
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