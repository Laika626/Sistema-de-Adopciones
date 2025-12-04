/*
 * Clase EstudioAdopcion contiene los atributos y métodos genéricos para el Estudio de adopcion.
 */
#ifndef ESTUDIOADOPCION_H_
#define ESTUDIOADOPCION_H_
#include <iostream>
#include <string>
#include <iostream>
#include <string>

//Declaracion de clase EstudioAdopcion
class EstudioAdopcion {
	private:
		 //Declaracion de atributos del objeto
		 std::string fecha;
		 std::string lugar;
		 int hijos;
		 int mascotasExistentes;
		 int tiempoParaMascota;
		 std::string actividadFisica;

	public:
		 //Declaracion de metodos del objeto
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

/**
 * Constructor por default
 * @return Objeto estudioAdopcion
 */
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

/**
 * getter fecha
 * @param que es esto
 * @return string: fecha
*/
std::string EstudioAdopcion::getFecha() {
	return fecha;
} 

/**
 * getter lugar
 * @param que es esto
 * @return string: lugar
*/
std::string EstudioAdopcion::getLugar() {
	return lugar;
}

/**
 * getter hijos
 * @param que es esto
 * @return int: hijos
*/
int EstudioAdopcion::getHijos () {
	return hijos;
}

/**
 * getter MascotasExistentes
 * @param que es esto
 * @return int: MascotasExistentes
*/
int EstudioAdopcion::getMascotasExistentes() {
	return mascotasExistentes;
}

/**
 * getter TiempoParaMascota
 * @param que es esto
 * @return int: tiempoParaMascota
*/		
int EstudioAdopcion::getTiempoParaMascota() {
	return tiempoParaMascota;
}

/**
 * getter ActividadFisica
 * @param que es esto
 * @return string: actividadFisisca
*/		
std::string EstudioAdopcion::getActividadFisica() {
	return actividadFisica;
} 

/**
 * setter fecha
 * @param que es esto
 * @Modificacion string: fecha
*/
void EstudioAdopcion::setFecha(std::string newFecha) {
	fecha = newFecha;
} 

/**
 * setter lugar
 * @param que es esto
 * @Modificacion string: lugar
*/
void EstudioAdopcion::setLugar(std::string newLugar) {
	lugar = newLugar;
} 

/**
 * setter hijos
 * @param que es esto
 * @Modificacion int: hijos
*/		
void EstudioAdopcion::setHijos(int newHijos) {
	hijos = newHijos;
} 

/**
 * setter MascotasExistentes
 * @param que es esto
 * @Modificacion int: fecha
*/
void EstudioAdopcion::setMascotasExistentes(int newMascotasExistentes) {
	mascotasExistentes = newMascotasExistentes;
} 

/**
 * setter TiempoParaMascotas
 * @param que es esto
 * @Modificacion int: TiempoParaMascotas
*/		
void EstudioAdopcion::setTiempoParaMascotas(int newTiempoParaMascotas) {
	tiempoParaMascota = newTiempoParaMascotas;
} 

/**
 * setter ActividadFisica
 * @param que es esto
 * @Modificacion string: ActividadFisica
*/		
void EstudioAdopcion::setActividadFisica(std::string newActividadFisica) {
	actividadFisica = newActividadFisica;
} 

#endif






