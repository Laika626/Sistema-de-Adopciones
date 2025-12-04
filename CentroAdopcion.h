/*
 * Clase EstudioAdopcion contiene los atributos y métodos genéricos para el Estudio de adopcion.
 */
#ifndef ESTUDIOADOPCION_H_
#define ESTUDIOADOPCION_H_
#include <iostream>
#include <string>
#include <iostream>
#include <string>

class EstudioAdopcion {
	private:
		 std::string fecha;
		 std::string lugar;
		 int hijos;
		 int mascotasExistentes;
		 int tiempoParaMascota;
		 std::string actividadFisica;

	public:
		EstudioAdopcion();
		std::string getFecha();
		std::string getLugar();
		int getHijos ();
		int getMascotasExistentes();
		int getTiempoParaMascota();
		std::string getActividadFisica();
		void setFecha(std::string newFecha);
		void setLugar(std::string newLugar);
		void setHijos(int newHijos);
		void setMascotasExistentes(int newMascotasExistentes);
		void setTiempoParaMascotas(int newTiempoParaMascotas);
		void setActividadFisica(std::string newActividadFisica);

};

EstudioAdopcion::EstudioAdopcion(){
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

std::string EstudioAdopcion::getFecha() {
	return fecha;
} 

std::string EstudioAdopcion::getLugar() {
	return lugar;
}

int EstudioAdopcion::getHijos () {
	return hijos;
}

int EstudioAdopcion::getMascotasExistentes() {
	return mascotasExistentes;
}
		
int EstudioAdopcion::getTiempoParaMascota() {
	return tiempoParaMascota;
}
		
std::string EstudioAdopcion::getActividadFisica() {
	return actividadFisica;
} 

void EstudioAdopcion::setFecha(std::string newFecha) {
	fecha = newFecha;
} 

void EstudioAdopcion::setLugar(std::string newLugar) {
	lugar = newLugar;
} 
		
void EstudioAdopcion::setHijos(int newHijos) {
	hijos = newHijos;
} 

void EstudioAdopcion::setMascotasExistentes(int newMascotasExistentes) {
	mascotasExistentes = newMascotasExistentes;
} 
		
void EstudioAdopcion::setTiempoParaMascotas(int newTiempoParaMascotas) {
	tiempoParaMascota = newTiempoParaMascotas;
} 
		
void EstudioAdopcion::setActividadFisica(std::string newActividadFisica) {
	actividadFisica = newActividadFisica;
} 

#endif






