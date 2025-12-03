#include <iostream>
#include <string>

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
