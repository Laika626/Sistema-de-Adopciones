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