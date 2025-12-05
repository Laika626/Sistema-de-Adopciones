/*
 * Clase Mascota contiene los atributos y métodos genéricos para el manejo de mascotas.
 */
#ifndef MASCOTA_H_
#define MASCOTA_H_
#include <iostream>
#include <string>

// Declaracion de clase Mascota
class Mascota {
 private:
    // Declaracion de atributos del objeto
    std::string nombre;
    std::string sexo;
    std::string tipoMascota;
    int edadMeses;
    std::string size;
    bool conviveConNinos;
    bool conviveConOtrasMascotas;
    bool adoptado;

 public:
    // Declaracion de metodos del objeto
    Mascota();
    Mascota(
        std::string c_nombre,
        std::string c_sexo,
        std::string c_tipoMascota,
        int c_edadMeses,
        std::string c_size,
        bool c_conviveConNinos,
        bool c_conviveConOtrasMascotas);
    std::string getNombre();
    std::string getSexo();
    std::string getTipoMascota();
    int getEdadMeses();
    std::string getSize();
    bool getConviveConNinos();
    bool getConviveConOtrasMascotas();
    void setNombre(std::string newName);
    void setSexo(std::string newSexo);
    void setTipoMascota(std::string newTipoMascota);
    void setEdadMeses(int newEdadMeses);
    void setSize(int newSize);
    void setConviveConNinos(bool newConviveConNinos);
    void setConviveConOtrasMascotas(bool newConviveConOtrasMascotas);
    void menuModificacionMascota();
};

/**
 * Constructor por default
 * @return Objeto mascota
 */
Mascota::Mascota() {
}

Mascota::Mascota(
    std::string c_nombre,
    std::string c_sexo,
    std::string c_tipoMascota,
    int c_edadMeses, std::string c_size,
    bool c_conviveConNinos,
    bool c_conviveConOtrasMascotas) {
    nombre = c_nombre;
    sexo = c_sexo;
    tipoMascota = c_tipoMascota;
    edadMeses = c_edadMeses;
    size = c_size;
    conviveConNinos = c_conviveConNinos;
    conviveConOtrasMascotas = c_conviveConOtrasMascotas;
    adoptado = false;
}

/**
 * getter nombre
 * @param que es esto
 * @return string: nombre
*/
std::string Mascota::getNombre() {
    return nombre;
}

/**
 * getter sexo
 * @param que es esto
 * @return string: sexo
*/
std::string Mascota::getSexo() {
    return sexo;
}

/**
 * getter tipo de mascota
 * @param que es esto
 * @return string: tipo de mascota
*/
std::string Mascota::getTipoMascota() {
    return tipoMascota;
}

/**
 * getter edad en meses
 * @param que es esto
 * @return string: edad en meses
*/
int Mascota::getEdadMeses() {
    return edadMeses;
}

/**
 * getter size
 * @param que es esto
 * @return string: size
*/
std::string Mascota::getSize() {
    return size;
}

/**
 * getter conivencia con ninos
 * @param que es esto
 * @return string: convivencia con ninos
*/
bool Mascota::getConviveConNinos() {
    return conviveConNinos;
}

/**
 * getter convivencia con otras mascotas
 * @param que es esto
 * @return string: convivencia con otras mascotas
*/
bool Mascota::getConviveConOtrasMascotas() {
    return conviveConOtrasMascotas;
}

/**
 * setter de nombre
 * @param que es esto
 * @Modificacion del nombre
*/
void Mascota::setNombre(std::string newName) {
    nombre = newName;
}

/**
 * setter del sexo
 * @param que es esto
 * @Modificacion del sexo
*/
void Mascota::setSexo(std::string newSexo) {
    sexo = newSexo;
}

/**
 * setter del tipo de mascota
 * @param que es esto
 * @Modificacion del tipo de mascota
*/
void Mascota::setTipoMascota(std::string newTipoMascota) {
    tipoMascota = newTipoMascota;
}

/**
 * setter de edad en meses
 * @param que es esto
 * @Modificacion de edad en meses
*/
void Mascota::setEdadMeses(int newEdadMeses) {
    edadMeses = newEdadMeses;
}

/**
 * setter de size
 * @param que es esto
 * @Modificacion de size
*/
void Mascota::setSize(int newSize) {
    size = newSize;
}

/**
 * setter de convivencia con ninos
 * @param que es esto
 * @Modificacion de convivencia con ninos
*/
void Mascota::setConviveConNinos(bool newConviveConNinos) {
    conviveConNinos = newConviveConNinos;
}

/**
 * setter de convivencia con otras mascotas
 * @param que es esto
 * @Modificacion de convivencia con otras mascotas
*/
void Mascota::setConviveConOtrasMascotas(bool newConviveConOtrasMascotas) {
    conviveConOtrasMascotas = newConviveConOtrasMascotas;
}

/**
 * Menu para la modificacion de varios atributos de los objetos de rescatistas
 * @param
 * @Modificacion de los atributos a eleccion del usuario
*/
void Mascota::menuModificacionMascota() {
    int opcionMascota;
    std::cout << "Que quieres modificar?" << std::endl;
    std::cout << "1) Nombre" << std::endl;
    std::cout << "2) Edad" << std::endl;
    std::cin >> opcionMascota;

    switch (opcionMascota) {
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

#endif
